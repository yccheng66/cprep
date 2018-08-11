#include "../src/inner_product.h"

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

TEST(AngleTest, first) {
  std::array<double , 2> u = {1, 0};
  std::array<double , 2> v = {1, 1};
  std::array<double , 2> w = {0, 1};
  std::array<double , 2> x = {-1, 1};
  std::array<double , 2> y = {-1, 0};
  std::array<double , 2> z = {-1, -1};
  ASSERT_NEAR(M_PI/4, angle(u,v), 0.0001);
  ASSERT_NEAR(M_PI/2, angle(u,w), 0.0001);
  ASSERT_NEAR(3*M_PI/4, angle(u,x), 0.0001);
  ASSERT_NEAR(M_PI, angle(u,y), 0.0001);
  ASSERT_NEAR(3*M_PI/4, angle(u,z), 0.0001);
}

TEST(AngleTest, illegalDim) {
  std::array<double , 2> u = {1, 0};
  std::array<double , 3> v = {1, 1, 1};
  ASSERT_ANY_THROW(angle(u,v));
}

TEST(LengthTest, twoVector) {
  std::array<double , 2> u = {0, 0};
  std::array<double , 2> v = {1, 0};
  std::array<double , 2> w = {1, 1};
  ASSERT_EQ(1, length(u,v));
  ASSERT_EQ(1, length(v,w));
  ASSERT_EQ(sqrt(2.0), length(w,u));
}
