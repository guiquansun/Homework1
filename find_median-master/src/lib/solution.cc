#include "solution.h"
#include <iostream>
double Solution::FindMedian(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  int length = inputs.size();

    if (length % 2 == 1) {

        int index = (length - 1) / 2;

        return inputs[index];
    }

    if (length % 2 == 0) {

        int index_1 = (length - 1) / 2;
        int index_2 = index_1 + 1;
        double result = (inputs[index_1] + inputs[index_2]) / 2.0;
        return result;

    }
}
/*
int Solution::FindMaxRecursive(std::vector<int> &inputs) {
  if (inputs.size() == 0) {
    return -1;
  }
  return FindMaxRecursiveAux(inputs, 0, inputs.size());
}

int Solution::FindMaxRecursiveAux(std::vector<int> &inputs, int left,
                                  int right) {
  if (right == left + 1) {
    return inputs[left];
  }

  int mid = (right + left) / 2;

  return std::max(FindMaxRecursiveAux(inputs, left, mid),
                  FindMaxRecursiveAux(inputs, mid, right));
}
*/