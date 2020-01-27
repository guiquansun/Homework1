#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::cout << solution.PrintHelloWorld() << std::endl;

    int n = 4;
    std::cout << "n: 4, output: " << solution.Factorial(n) << std::endl;
    std::cout << "n: 4, output: " << solution.FactorialRecursive(n) << std::endl;

    n = 0;
    std::cout << "n: 0, output: " << solution.Factorial(n) << std::endl;
    std::cout << "n: 0, output: " << solution.FactorialRecursive(n) << std::endl;


    return EXIT_SUCCESS;
}