#include <gtest/gtest.h>

double innerProduct(double x1, double y1, double x2, double y2) {
  return x1*x2 + y1*y2;
}

double innerProduct(double x1, double y1, double z1, double x2, double y2, double z2) {
  return x1*x2 + y1*y2 + z1*z2;
}

int main(int argc, char ** argv) {
   testing :: InitGoogleTest( &argc , argv ) ;
   return RUN_ALL_TESTS( ) ;
}

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
