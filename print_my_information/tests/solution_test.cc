#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HelloWorldShould, ReturnHelloWorld) {
  Solution solution;
  std::string actual = solution.PrintHelloWorld();
  std::string expected = "**** Hello World ****";
  EXPECT_EQ(expected, actual);
}

TEST(NameShould, ReturnName) {
  Solution solution;
  std::string actual = solution.PrintName();
  std::string expected = "My name is Guiquan Sun.";
  EXPECT_EQ(expected, actual);
}

TEST(MajorShould, ReturnMajor) {
  Solution solution;
  std::string actual = solution.PrintMajor();
  std::string expected = "My major is Electrical Engineering.";
  EXPECT_EQ(expected, actual);
}

TEST(InterestsShould, ReturnInterests) {
  Solution solution;
  std::string actual = solution.PrintInterests();
  std::string expected = "I am good at Football.";
  EXPECT_EQ(expected, actual);
}