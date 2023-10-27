// thispointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
class Account
{
private:
    double balance;
    
public:
    void set_balance( double balance);
    void compareObject(const Account &sourse);

};
void Account:: set_balance(double balance)
{
    this->balance = balance;
}
void Account::compareObject(const Account& sourse)
{
    if (this == &sourse)
    {
        std::cout << "Compared Object!\n" << std::endl;
    }
}
int main()
{
    Account obj1;
    obj1.set_balance(200.0);
    obj1.compareObject(obj1);
    std::cout << "Hello World!\n"<<std::endl;
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
