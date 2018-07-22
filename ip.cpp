#include <gtest/gtest.h>
#include "inner_product.h"

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

TEST (InnerProductTest, array) {
  double u[] = {1, 0, 1};
  double v[] = {1, 1, 1};
  double ip = innerProduct(u, v, 3);
  ASSERT_EQ(2, ip);
}
