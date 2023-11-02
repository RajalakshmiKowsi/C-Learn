// STLMACRO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define MAX_SIZE 100
#define PI 3.145
#define MAX(a,b) ((a>b)?a:b)
#define SQUARE(a) ((a)*(a))
int main()
{
    int result{};
    std::cout << MAX_SIZE << std::endl;
    std::cout << PI << std::endl;
    std::cout << MAX(10,20) << std::endl;
    std::cout << MAX(10.3,20.5) << std::endl;
    std::cout << MAX('C', 'A') << std::endl;
    result = SQUARE(4);
    std::cout << result << std::endl;
    std::cout << SQUARE(5.6) << std::endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
