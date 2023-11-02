// DividedByZero.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class DivideByZeroException
{

};
class NegativeValueException
{

};
double calculate_mgp(int miles, int gallones)
{
	if (gallones == 0)
	{
		throw DivideByZeroException();
	}
	else if (gallones <0||miles<0)
	{
		throw NegativeValueException();
	}
	return  static_cast<double>(miles) / gallones;
};

int main()
{
	try
	{
		int miles{};
		int gallones{};
		double milestones{};
		cout << "Enter the miles" << endl;
		cin >> miles;
		cout << "Enter the gallones" << endl;
		cin >> gallones;
		milestones = calculate_mgp(miles,gallones);
		cout << "Result:" << milestones << endl;
	}
	catch ( const DivideByZeroException &ex)
	{
		cerr << "sorry, you cont dived by zero:" <<  endl;
	}
	catch (const NegativeValueException& ex)
	{
		cerr <<"one of your parameter is negative" << endl;
	}
	
}

