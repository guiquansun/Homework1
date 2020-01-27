#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(Calculatefactorial, HandlesFive) {
  Solution solution;
  int n = 5;
  EXPECT_EQ(solution.Factorial(n), 120);
  EXPECT_EQ(solution.FactorialRecursive(n), 120);
}

TEST(Calculatefactorial, HandlesFour) {
  Solution solution;
  int n = 4;
  EXPECT_EQ(solution.Factorial(n), 24);
  EXPECT_EQ(solution.FactorialRecursive(n), 24);
}

TEST(Calculatefactorial, HandlesOne) {
  Solution solution;
  int n = 1;
  EXPECT_EQ(solution.Factorial(n), 1);
  EXPECT_EQ(solution.FactorialRecursive(n), 1);
}

TEST(Calculatefactorial, HandlesZero) {
  Solution solution;
  int n = 0;
  EXPECT_EQ(solution.Factorial(n), 1);
  EXPECT_EQ(solution.FactorialRecursive(n), 1);
}

