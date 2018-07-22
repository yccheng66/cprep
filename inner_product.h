#ifndef INNER_PRODUCT_H
#define INNER_PRODUCT_H

double innerProduct(double x1, double y1, double x2, double y2) {
  return x1*x2 + y1*y2;
}

double innerProduct(double x1, double y1, double z1, double x2, double y2, double z2) {
  return x1*x2 + y1*y2 + z1*z2;
}

#endif
