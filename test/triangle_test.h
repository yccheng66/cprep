#include "../src/triangle.h"
#include <algorithm>

TEST(TraingleTest, first) {
  std::array<double, 2> a={0,0}, b={1,0}, c = {1,1};
  Triangle t(a,b,c);
  ASSERT_EQ (1+1+sqrt(2.0), t.perimeter());
  ASSERT_NEAR (0.5, t.area(), 0.0001);
}

TEST(TriangleTest, TriangleWithVector) {
  std::vector<double> a={0,0}, b={1,0}, c = {1,1};
  TriangleV t(a,b,c);
  ASSERT_NEAR (1+1+sqrt(2.0), t.perimeter(), 0.0001);
  ASSERT_NEAR (0.5, t.area(), 0.0001);
}

TEST(TriangleTest, TrangleAreaAsAFunction) {
  std::vector<double> a={0,0}, b={1,0}, c = {1,1};
  ASSERT_NEAR (0.5, area(a, b, c), 0.0001);
}

TEST(TriangleTest, SortTrianglesByAreaIncreasing) {
  std::vector<double> a={0,0}, b={1,0}, c = {1,1}, d ={2, 0}, e = {2,2},
                      f={3,0}, g={3,3};
  std::vector<TriangleV> vot ={TriangleV(a, d, e), TriangleV(a, b, c), TriangleV(a, f, g)};
  std::sort(vot.begin(), vot.end(), [](TriangleV & t1, TriangleV & t2){
    return t1.area() < t2.area();
  });
  ASSERT_NEAR(0.5, vot[0].area(), 0.0001);
  ASSERT_NEAR(2.0, vot[1].area(), 0.0001);
  ASSERT_NEAR(4.5, vot[2].area(), 0.0001);
}
