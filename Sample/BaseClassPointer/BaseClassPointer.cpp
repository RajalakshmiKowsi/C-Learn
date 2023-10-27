// BaseClassPointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Account
{
public:
    int withdraw(int d)
    {
        std::cout << d << std::endl;
        return d;
    }
};
class Saving:public Account
{

};
class Truct :public Account
{

};
class Checking :public Account
{

};
int main()
{
    Account* p1 = new Account();
    Account* p2 = new Account();
    Account* p3 = new Account();
    Account* p4 = new Account();

    p1->withdraw(1000);
    p2->withdraw(2000);
    p3->withdraw(3000);
    p4->withdraw(4000);

    Account* array[] = {p1,p2,p3,p4};
    for ( auto i=0;i<4;i++)
    {
        array[i]->withdraw(1000);
    }
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
