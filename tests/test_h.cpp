#include <gtest/gtest.h>
#include "../include/main.h"

TEST(SumTest, HandleSum) {
  const int n = 5;
  int b[n] = {1, 2, 3, 4, 5};

  EXPECT_EQ(Sum(b, n), 15);
}

TEST(Sort, HandleSort) {
  const int n = 3;
  int b[n] = {1, 2, 3};
  Sort(b, n);

  for (int i = 0; i < n; i++) {
    EXPECT_EQ(b[i], (std::vector<int>({1, 0, 3}))[i]);
  }
}