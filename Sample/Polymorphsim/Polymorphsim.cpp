// Polymorphsim.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class A {
    int x;

public:
    A()
    {
        cout << "A's constructor called " <<
            endl;
    }
};

class B {
    static A a;

public:
    B()
    {
        cout << "B's constructor called " <<
            endl;
    }
    static A getA()
    {
        return a;
    }
};

// Definition of a
A B::a;
class Base
{
public:
    virtual void myfun() final
    {
        cout << "myfun() in Base";
    }
};
class Derived : public Base
{
    /*void myfun()
    {
        cout << "myfun() in Derived\n";
    }*/
};
class Employee
{
    int id;
    char name[30];
public:
    void getdata();//Declaration of function
    void putdata();//Declaration of function
};
void Employee::getdata() {//Defining of function
    cout << "Enter Id : ";
    cin >> id;
    cout << "Enter Name : ";
    cin >> name;
}
void Employee::putdata() {//Defining of function
    cout << id << " ";
    cout << name << " ";
    cout << endl;
}



class websiteName
{
public:
    virtual string getName() = 0;
};

class shortForm : public websiteName
{
public:
    string getName()
    {
        return "shortForm";
    }
};

class fullForm : public websiteName
{
public:
    string getName()
    {
        return "fullForm";
    }
};

// Driver code
int main()
{
    B b1, b2, b3;
    A a = b1.getA();
    Employee emp; //One member 
    emp.getdata();//Accessing the function
    emp.putdata();//Accessing the function

    shortForm obj1;
    fullForm obj2;
    websiteName* ptr;
    ptr = &obj1;
    cout << "Short form - " <<
        ptr->getName();
    ptr = &obj2;
    cout << "\nFull form - " <<
        ptr->getName();

    return 0;
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
