// structurepointer.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Point {
    int x = 0; // It is Considered as Default Arguments and no Error is Raised
    int y = 1;
};

int main()
{
    struct Point p1;
    cout << "x = " << p1.x << ", y = " << p1.y << endl;
    p1.y = 20;
    cout << "x = " << p1.x << ", y = " << p1.y;

    // Create an array of structures
    struct Point arr[10];

    // Access array members
    arr[0].x = 10;
    arr[0].y = 20;

    cout << arr[0].x << " " << arr[0].y;

    struct Point p2 = { 1, 2 };

    // p2 is a pointer to structure p1
    struct Point* p3 = &p2;

    // Accessing structure members using
    // structure pointer
    cout << p3->x << " " << p3->y;

}