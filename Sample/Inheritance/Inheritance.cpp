// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Person {
    int id;
    char name[100];

public:
    void set_p()
    {
        cout << "Enter the Id:";
        cin >> id;
        cout << "Enter the Name:";
        cin >> name;
    }

    void display_p()
    {
        cout << endl << "Id: " << id << "\nName: " << name << endl;
    }
};

class Student : private Person {
    char course[50];
    int fee;

public:
    void set_s()
    {
        set_p();
        cout << "Enter the Course Name:";
        cin >> course;
        cout << "Enter the Course Fee:";
        cin >> fee;
    }

    void display_s()
    {
        display_p();
        cout << "Course: " << course << "\nFee: " << fee << endl;
    }
};
class X {
public:
    void setProtMemb(int i) { m_protMemb = i; }
    void Display() { cout << m_protMemb << endl; }
protected:
    int  m_protMemb;
    void Protfunc() { cout << "\nAccess allowed\n"; }
} x;

class Y : public X {
public:
    void useProtfunc() { Protfunc(); }
} y;

class base {
public:
    void display() {
        cout << "Function of base class" << endl;
    }
};

class derived : public base {
public:
    void display() {
        cout << "Function of derived class" << endl;

        // calling base class function
        base::display();
    }
};
class Parent {
public:
    void GeeksforGeeks_Print()
    {
        cout << "Base Function" << endl;
    }
};

class Child : public Parent {
public:
    void DerivedFunction_Print()
    {
        cout << "Derived Function" << endl;
    }
};
class VirtualClassBase {
public:
    // function that call print

    void call_Function() { print(); }
    // the display function
    virtual void print()
    {
        cout << "Printing the Base class Content" << endl;
    }
};


class VirtualClassDrived : public VirtualClassBase {
public:
    void print() 
    {
        cout << "Printing the Derived class Content"
            << endl;
    }
};
class A {
public:
    void display() {
        cout << "Base class content.";
    }
};

class B : public A {};

class C : public B {};

class MyClass {
public:
    void myFunction() {
        cout << "Some content in parent class.";
    }
};

// Another base class
class MyOtherClass {
public:
    void myOtherFunction() {
        cout << "Some content in another class.";
    }
};
// Derived class
class MyChildClass : public MyClass, public MyOtherClass {
};
int main()
{
    Student s;
    s.set_s();
    s.display_s();
    x.setProtMemb(0);   // OK, uses public access function
    x.Display();
    y.setProtMemb(5);   // OK, uses public access function
    y.Display();
     //x.Protfunc();        error becase of protected
    y.useProtfunc();
    derived d;
    d.display();
    Child Child_Derived;
    Child_Derived.DerivedFunction_Print();
    VirtualClassBase virtualClassBase; 
    virtualClassBase.call_Function(); 
    VirtualClassDrived VirtualClassdrived; 
    VirtualClassdrived.call_Function();
    C obj;
    obj.display();
    MyChildClass myObj;
    myObj.myFunction();
    myObj.myOtherFunction();
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
