// methodoverloading.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<memory>
using namespace std;
class Base
{
public:
    void Say_hello() const
    {
        cout << "Hello i am base class object" << endl;
    }
};

class Drived:public Base
{
public:
    void Say_hello() const
    {
        cout << "Hello i am Drived class object" << endl;
    }
};

void greatings(const Base& obj)
{
    cout << "greetings:";
    obj.Say_hello();
}
int main()
{
    Base b;
    b.Say_hello();
    Drived d;
    d.Say_hello();
    greatings(b);
    greatings(d);

    Base* ptr = new Drived();
    ptr->Say_hello();

    unique_ptr<Base> ptr = make_unique<Drived>();
    ptr->Say_hello();

    delete ptr;
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
