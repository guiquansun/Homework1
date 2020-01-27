#include "solution.h"

std::string Solution::PrintHelloWorld() { 
  return "**** Hello World ****"; 
}

int Solution::Factorial(int n){
    if (n < 0) {
        return -1;
    }

    if (n == 0) {
      return 1;
    }
    int result = 1;
    while (n > 0) {

      result = result * n;
      n = n - 1;

    }

    return result;

}

int Solution::FactorialRecursive(int n) {
  if (n < 0) {
    return -1;
  }
  if (n == 0) {
    return 1;
  }
  return n * FactorialRecursive(n - 1);
}

