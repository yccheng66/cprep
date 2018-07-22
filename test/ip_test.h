#include "../inner_product.h"

TEST (InnerProductTest, first) {
  double x1=1, y1=1, x2=-1, y2=1;
  double ip = x1*y1 + x2*y2;
  ASSERT_EQ(0, ip);
}

TEST (InnerProductTest, InnerProductAsFunction) {
  double x1=1, y1=1, x2=-1, y2=1;
  double ip = innerProduct(x1,y1,x2,y2);
  ASSERT_EQ(0, ip);
}

TEST (InnerProductTest, InnerProduct3D) {
  double x1=1, y1=1, z1 = 1, x2=-1, y2=1, z2 = 1;
  double ip = innerProduct(x1,y1,z1,x2,y2,z2);
  ASSERT_EQ(1, ip);
}

TEST (InnerProductTest, array) {
  double u[] = {1, 0, 1};
  double v[] = {1, 1, 1};
  double ip = innerProduct(u, v, 3);
  ASSERT_EQ(2, ip);
}

TEST(InnerProductTest, VectorObject) {
  std::array<double , 3> u = {1, 0, 1};
  std::array<double , 3> v = {1, 1, 1};
  double ip = innerProduct(u, v);
  ASSERT_EQ(2, ip);
}

TEST(InnerProductTest, VectorObjectDiffDim) {
  std::array<double , 3> u = {1, 0, 1};
  std::array<double , 2> v = {1, 1};
  try {
    innerProduct(u, v);
  } catch (std::string s) {
    ASSERT_EQ(std::string("error: diff dimension"), s);
  }
}
