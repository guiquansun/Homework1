#include <iostream>
#include "src/lib/solution.h"

int main()
{
    Solution solution ;
    std::cout << solution.PrintHelloWorld() << std::endl;
    std::cout << solution.PrintName() << std::endl;
    std::cout << solution.PrintMajor() << std::endl;
    std::cout << solution.PrintInterests() << std::endl;

    return EXIT_SUCCESS;
}