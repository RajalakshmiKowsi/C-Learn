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
    int num3{ 200 };
    int num4{ 100 };
    int result{ 0 };
    result = num3 + num4;
    cout<< num3 <<"+" << num4<<"="<<result<<endl;
    result = num3 - num4;
    cout<<num3<< "-" << num4<< "="<< result << endl;
    result = num3 * num4;
    cout<< num3<< "*"<<num4<< "="<< result << endl;
    result = num3 / num4;
    cout<< num3 << "/" << num4 << "=" << result << endl;
    result = num3 / num4;
    cout<< num3 << "/" << num4 << "=" << result << endl;

    result = num3 % num4;
    cout << num3 << "%" << num4<< "=" << result << endl;
    //Example 1 -Simple increments
    int counter{10};

    int result1{0};

    cout << "Counter: "<< counter<< endl;
    counter = counter + 1;
    cout << "Counter: " << counter << endl;
    counter++;
    cout << "Counter: " << counter << endl;
    ++counter;
    cout << "Counter: " << counter << endl;
    counter = 10;
    result1 = 0;
    cout << "Counter: " << counter << endl;
    result1 = ++counter +10;

    cout << "Counter: " << counter << endl;
    cout << "Result1: " << result1 << endl;

    int total{};
    int n1{}, n2{}, n3{};
    const int count{ 3 };
    cout << "Enter 3 integers seperated by spaces";
    cin >> n1 >> n2 >> n3;
    total = n1 + n2 + n3;
    double avegrage{ 0.0 };
    avegrage = static_cast<double>(total)/ count;
    cout << "there 3 numbers were: "<<n1<<n2<<n3<<endl;
    cout << "the sum of the numbers is: "<<total<<endl;
    cout << "the average of the numbers is: "<<avegrage<<endl;
    cout << endl;

    bool equal_result(false);
    bool not_equal_result(false);
    int number1{}, number2{};
    cout << "Enter two integers seperated by space:";
    cin >> number1 >> number2;
    equal_result = (number1 == number2);
    not_equal_result = (number1 != number2);
    cout << "Comparision result of (equal):"<<equal_result;
    cout << "Comparision result of (notequal):" << not_equal_result;

    char char1{}, char2{};
    cout << "Enter two charcter seperated by space:"<<endl;
    cin >> char1 >> char2;
    equal_result = (char1 == char2);
    not_equal_result = (char1 != char2);
    cout << "Comparision result of (equal):" << equal_result<<endl;
    cout << "Comparision result of (notequal):" << not_equal_result<<endl;



    return 0;
}

