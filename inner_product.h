#ifndef INNER_PRODUCT_H
#define INNER_PRODUCT_H

#include <array>

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
  if (n != m)
    throw std::string("error: diff dimension");
  double ip = 0;
  for (int i=0; i< n; i++)
    ip += a[i]*b[i];
  return ip;
}
#endif
