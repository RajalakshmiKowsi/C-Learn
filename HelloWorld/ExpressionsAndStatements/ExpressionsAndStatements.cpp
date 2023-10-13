// ExpressionsAndStatements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    //Assignment oprator
    const  int num1{10};

    int num2{20};

    cout << "num1 is "<<num1;
    cout << " num2 is " << num2;
    cout << endl;

    //arithmetic oprator
    int num1{ 200 };
    int num2{ 100 };
    int result{ 0 };
    result = num1 + num2;
    cout << num1 <<"+" << num2<<"="<<result<<endl;
    result = num1 - num2;
    cout << num1 << "-" << num2 << "=" << result << endl;
    result = num1 * num2;
    cout << num1 << "*" << num2 << "=" << result << endl;
    result = num1 / num2;
    cout << num1 << "/" << num2 << "=" << result << endl;
    result = num2 / num1;
    cout << num1 << "/" << num2 << "=" << result << endl;

    result = num1 % num2;
    cout << num1 << "%" << num2 << "=" << result << endl;

}

