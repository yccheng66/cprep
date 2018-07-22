void swapVal(int a, int b) {
  int t = a;
  a = b;
  b = t;
}

void swap(int * a, int * b) {
  int t = *a;
  *a = *b;
  *b = t;
}

void swap(int & a, int & b) {
  int t = a;
  a = b;
  b = t;
}

TEST(SwapTest, byValue) {
  int a = 1, b = 2;
  swapVal(a, b);
  ASSERT_EQ(1, a);
  ASSERT_EQ(2, b);
}

TEST(SwapTest, byValuePointer) {
  int a = 1, b = 2;
  swap(&a, &b);
  ASSERT_EQ(2, a);
  ASSERT_EQ(1, b);
}

TEST(SwapTest, byRef) {
  int a = 1, b = 2;
  swap(a, b);
  ASSERT_EQ(2, a);
  ASSERT_EQ(1, b);
}
