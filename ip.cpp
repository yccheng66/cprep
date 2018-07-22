#include <gtest/gtest.h>
#include "inner_product.h"
#include <iostream>

int main(int argc, char ** argv) {
  std::cout << "input dimension of the vectors for inner product computation:\n";
  int n;
  std::cin >> n;
  double u[n], v[n];
  std::cout << "input the first vector:\n";
  for (int i=0; i<n; ++i)
    std::cin >> u[i];
  std::cout << "input the second vector:\n";
  for (int i=0; i<n; ++i)
    std::cin >> v[i];
  std::cout << "the inner product is " << innerProduct(u, v, n) << "\n";
  return 0;
}
