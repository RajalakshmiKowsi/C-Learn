// DynamicClientLib.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../DynamicLibrary/MathLibrary.h"

int main()
{
    fibonacci_init(1, 1);
    // Write out the sequence values until overflow.
    do {
        std::cout << fibonacci_index() << ": "
            << fibonacci_current() << std::endl;
    } while (fibonacci_next());
    // Report count of values written before overflow.
    std::cout << fibonacci_index() + 1 <<
        " Fibonacci sequence values fit in an " <<
        "unsigned 64-bit integer." << std::endl;

}

