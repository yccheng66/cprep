#include "../src/triangle.h"

TEST(TraingleTest, first) {
  std::array<double, 2> a={0,0}, b={1,0}, c = {1,1};
  Triangle t(a,b,c);
  ASSERT_EQ (1+1+sqrt(2.0), t.perimeter());
  ASSERT_NEAR (0.5, t.area(), 0.0001);
}
