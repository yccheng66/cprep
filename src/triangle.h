#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <array>
#include "inner_product.h"
#include <vector>

class Triangle {
public:
  Triangle (std::array<double,2> const & a, std::array<double,2> const & b, std::array<double,2> const & c)
  // : _a(a), _b(b), _c(c)
  {
    _a = a;
    _b = b;
    _c = c;
  }
  double perimeter() const {
    return length(_a, _b) + length(_b, _c) + length(_c, _a);
  }

  double area () const {
    double s = perimeter()/2.0;
    double a = length(_a, _b);
    double b = length(_b, _c);
    double c = length(_c, _a);
    return sqrt(s*(s-a)*(s-b)*(s-c));
  }
  std::array<double,2> _a, _b, _c;

};

class TriangleV {
public:
  TriangleV(std::vector<double> a, std::vector<double> b, std::vector<double> c):
  _a(a), _b(b), _c(c) {
    if (_a.size() != 2 || _b.size() != 2 || _c.size() != 2)
      throw std::string("illegal vertices");
  }
  double perimeter () const {
    return length(_b-_a) + length(_c-_b) +length(_a-_c);
  }

  double area () const {
    double s = perimeter()/2;
    double a = length(_b-_a);
    double b = length(_c-_b);
    double c = length(_a-_c);
    return sqrt(s*(s-a)*(s-b)*(s-c));
  }
private:
  std::vector<double> _a, _b, _c;
};

#endif
