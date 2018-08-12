#include <gtest/gtest.h>
#include "inner_product.h"
#include <iostream>

void getVectorFromConsole (double v[], int n) {
  for (int i=0; i<n; ++i)
    std::cin >> v[i];
}

int main(int argc, char ** argv) {
  bool cont = true;
  while (cont) {
    std::cout << "input dimension of the vectors for inner product computation:\n";
    int n;
    std::cin >> n;
    double u[n], v[n];
    std::cout << "input the first vector:\n";
    getVectorFromConsole(u, n);
    std::cout << "input the second vector:\n";
    getVectorFromConsole(v, n);
    std::cout << "the inner product is " << innerProduct(u, v, n) << "\n";
    std::cout << "Press c<ret> to continue, anything else<ret> to terminate: ";
    char reply;
    std::cin >> reply;
    cont = ('c' == reply);
  }
  std::cout << "Goodbye from inner product calculator!\n";
  return 0;
}
