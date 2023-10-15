// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cmath>
#include<ctime>

using namespace std;
const double pi{ 3.14159 };

double calc_area_circle(double radius) {
	return pi * radius * radius;
}

double calc_volume_cylinder(double radius, double height) {
	//    return pi * radius * radius * height;
	return calc_area_circle(radius) * height;
}

void area_circle() {
	double radius{};
	cout << "\nEnter the radius of the circle: ";
	cin >> radius;
	cout << "The area of a circle with radius " << radius << " is " << calc_area_circle(radius) << endl;
}

void volume_cylinder() {
	double radius{};
	double height{};
	cout << "\nEnter the radius of the cylinder: ";
	cin >> radius;
	cout << "\nEnter the height of the cylinder: ";
	cin >> height;

	cout << "The volume of a cylinder with radius " << radius << " and height " << height << " is " << calc_volume_cylinder(radius, height) << endl;
}
int main()
{
	double num{};
	cout << "Enter a number (double): ";
	cin >> num;
	cout << "The squart of " << num << "is:" << sqrt(num) << endl;
	cout << "The cubed root of " << num << "is:" << cbrt(num) << endl;
	cout << "The sine of" << num << "is:" << sin(num) << endl;
	cout << "The cos of" << num << "is:" << cos(num) << endl;
	cout << "The celi of" << num << "is:" << ceil(num) << endl;
	cout << "The floor of" << num << "is:" << floor(num) << endl;
	cout << "The round of" << num << "is:" << round(num) << endl;
	double power{};
	cout << "\n Enter a power to raise " << num << "to:" << endl;
	cin >> power;
	cout << num << "raised to the " << power << "power is" << pow(num, power);

	int random_number{};
	size_t count{ 10 };
	int min{ 1 };
	int max{ 6 };
	cout << "RAND_MAX on my system is:" << RAND_MAX << endl;
	srand(time(nullptr));
	for (size_t i{ 0 }; i <= count;++i)
	{
		random_number = rand() % max + min;
		cout << random_number << endl;
	}

	area_circle();
	area_circle();
	volume_cylinder();

}