// HelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
// this is comments

/*
 this is multipe line
 comments
*/
int age1{ 45 };//globale variable

using namespace std;
int main()
{
    
    //int fav_number;
    //cout << "Enter your favourite number between 1 and 100:";
    //cin >> fav_number;
    //cout << "Amazing!! That's my favorite number tool!"<<endl;
    //cout << "No really!!," << fav_number << " is my favorite number"<<endl;
    //

    int num1;
    int num2;
    double num3;

    //cout << "Enter a first integer :";
    //cin >> num1;
    //cout << "Enter a second integer :";
    //cin >> num2;
    //cout << "your entered " << num1 << " and " << num2 << endl;

    //cout << "Enter 2 integers separated with a space :";
    //cin >> num1 >> num2;
    //cout << "your entered " << num1 << " and " << num2 << endl;
    

    cout << "Enter an integer :";
    cin >> num1;
    cout << "Enter a double :";
    cin >> num3;
    cout << "The integer is: " << num1 << endl;
    cout << "And the double is: " << num3 << endl;

    int age={49};
    string name ={"Raji"};
    double hourly_wage = { 23.50 };

    cin >> name >> age;
    
    cout << name << " " << age << " " << hourly_wage<<endl;
    cout << age1;

    return 0;
}
