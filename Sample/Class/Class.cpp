// Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
void SumNum(int A, int B)
{
    cout << endl << "SUMNUM is : " << A + B;
}

void SumNum(int A, int B, int C)
{
    cout << endl << "SUMNUM is : " << A + B + C;
}

void SumNum(int A, int B, int C, int D)
{
    cout << endl << "SUMNUM is : " << A + B + C + D;
}
int main() {
    // create objects 
    Room room3, room4;
    room3.length = 5.5;
    room3.breadth = 5.5;
    double result = room3.calculateArea();
    Encap obj;
    obj.set(5);
    cout << obj.get();
    cout << result << endl;

    implementAbs obj1;
    obj1.set(10, 20);
    obj1.display();
    Defaultconstruct c;
    cout << "a: " << c.a << endl << "b: " << c.b;
    Point p1(10, 15);

    B b;


    // Access values assigned by constructor
    cout << "p1.x = " << p1.getX()
        << ", p1.y = " << p1.getY();


    SumNum(1, 2);
    SumNum(1, 2, 3);
    SumNum(1, 2, 3, 4);

    DateMember MyDate(7, 4, 1992);
    const DateMember BirthDate(1, 18, 1945);
    MyDate.setMonth(4);    // Okay
    BirthDate.getMonth();    // Okay
}
class Encap {
private:
    int x;

public:
    
    void set(int a) { x = a; }
    int get() { return x; }
};

class implementAbs {
private:
    int a, b;

public:
    
    void set(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};


 class Room {
public:
    double length;
    double breadth;
    double height;

    double calculateArea() {
        return length * breadth;
    }

    double calculateVolume() {
        return length * breadth * height;
    }

};

 class Defaultconstruct {
 public:
     int a, b;

     // Default Constructor
     Defaultconstruct()
     {
         a = 10;
         b = 20;
     }
 };

 class Point {
 private:
     int x, y;

 public:
     // Parameterized Constructor
     Point(int x1, int y1)
     {
         x = x1;
         y = y1;
     }

     int getX() { return x; }
     int getY() { return y; }
 };

 class A {
 public:
     A()
     {
         cout << "A's Constructor Called " <<
             endl;
     }
 };

 class B {
     static A a;

 public:
     B()
     {
         cout << "B's Constructor Called " <<
             endl;
     }
 };

 class DateMember
 {
 public:
     DateMember(int mn, int dy, int yr);
     int getMonth() const;     // A read-only function
     void setMonth(int mn);   // A write function; can't be const
 private:
     int month;
 };

 int DateMember::getMonth() const
 {
     return month;        // Doesn't modify anything
 }
 void DateMember::setMonth(int mn)
 {
     month = mn;          // Modifies data member
 }
 