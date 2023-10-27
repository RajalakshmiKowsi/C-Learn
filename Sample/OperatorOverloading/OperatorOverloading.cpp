// OperatorOverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string.h>
#include "OperatorOverloading.h"
using namespace std;
MyString::MyString(const MyString& Sourse) :str{ nullptr }
{
    str = new char[strlen(Sourse.str) + 1];
    //strncpy(str, Sourse.str);
}
//Copy assignment

MyString& MyString::operator=(const MyString& rhs)
{
    cout << "Copy Assignment oprator"  << endl;
    if (this == &rhs)
    {
        return *this;
    }
    delete[]str;
    str = new char[strlen(rhs.str) + 1];
    //strcpy(this->str, rhs.str);
}

// overloaded insertion operator
std::ostream& operator<<(std::ostream& os, const MyString& rhs) {
    os << rhs.str;
    return os;
}

// overloaded extraction operator
std::istream& operator>>(std::istream& in, MyString& rhs) {
    char* buff = new char[1000];
    in >> buff;
    rhs = MyString{ buff };
    delete[] buff;
    return in;
}

//
MyString::~MyString()
{
    delete[] str;
}
void MyString::Display() const
{
    std::cout << str << ":" << get_length() << endl;
}
// 
int MyString::get_length()const { return strlen(str); }
const char* MyString::get_str() const { return str; }

int main()
{
    MyString larry{ "Larry" };
    MyString moe{ "Moe" };
    MyString curly;

    cout << "Enter the third stooge's first name: ";
    cin >> curly;

    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;

    cout << "\nEnter the three stooges names separated by a space: ";
    cin >> larry >> moe >> curly;

    cout << "The three stooges are " << larry << ", " << moe << ", and " << curly << endl;
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
