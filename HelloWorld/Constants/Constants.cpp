// Constants.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int number_of_rooms{0};
    cin >> number_of_rooms;
    const double price_per_room{ 32.5 };
    const double sale_tax{ 32.5 };
    cout << "Hello,Welcome to frank's Carpet cleaning Service"<<endl;
    cout << "Hello,"<<price_per_room<<" sale_tax "<< sale_tax <<endl;

}

