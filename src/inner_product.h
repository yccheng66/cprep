#ifndef INNER_PRODUCT_H
#define INNER_PRODUCT_H

#include <array>
#include <math.h>

double innerProduct(double x1, double y1, double x2, double y2) {
  return x1*x2 + y1*y2;
}

double innerProduct(double x1, double y1, double z1, double x2, double y2, double z2) {
  return x1*x2 + y1*y2 + z1*z2;
}

double innerProduct (double * const a, double * const & b, int n) {
  double ip = 0;
  for (int i=0; i< n; i++)
    ip += a[i]*b[i];
  return ip;
}

template<size_t n, size_t m>
double innerProduct(std::array<double, n> a, std::array<double, m> b) {
  // if (n != m)
  if (a.size() != b.size())
    throw std::string("error: diff dimension");
  double ip = 0;
  for (int i=0; i< n; i++)
    ip += a[i]*b[i];
  return ip;
}

template<size_t n>
double length(std::array<double, n> a) {
  double sumsq =0;
  for (int i=0; i<a.size(); i++)
    sumsq += a[i]*a[i];
  return sqrt(sumsq);
}

template<size_t n>
double length(std::array<double, n> a, std::array<double, n> b) {
  double sumsq =0;
  for (int i=0; i<a.size(); i++)
    sumsq += (a[i]-b[i])*(a[i]-b[i]);
  return sqrt(sumsq);
}

template<size_t n, size_t m>
double angle(std::array<double, n> a, std::array<double, m> b) {
  return acos(innerProduct(a,b)/(length(a)*length(b)));
}

std::vector<double> operator - (std::vector<double> const & a, std::vector<double> const & b) {
  if (a.size() != b.size())
    throw std::string("dim error");
  std::vector<double> r(a);
  for (int i=0; i< a.size(); i++)
    r[i] -= b[i];
  return r;
}

double length(std::vector<double> const & v) {
  double len = 0;
  for (int i =0; i< v.size(); i++)
    len += v[i]*v[i];
  return sqrt(len);
}
#endif
