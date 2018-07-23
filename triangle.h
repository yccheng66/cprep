#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <array>
#include "inner_product.h"

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

#endif
