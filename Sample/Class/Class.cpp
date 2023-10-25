// Class.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main() {
    // create objects 
    Room room3, room4;
    room3.length = 5.5;
    room3.breadth = 5.5;
    double result = room3.calculateArea();

    cout << result << endl;

}


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