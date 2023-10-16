// RecursionFactorial.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int factorial(int n)
{
    if (n == 0)
        return 1;	             // base case
    return n * factorial(n - 1); // recursive case
}
inline int add_number(int a, int b)
{
    return a + b;
}
int main()
{
    int result{ 0 };
    result = add_number(100, 200);
    cout << "iniline add_number " << result << endl;       // 6

    cout << factorial(3) << endl;       // 6

}

