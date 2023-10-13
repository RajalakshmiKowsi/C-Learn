// Primitivetype.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	/***********
	*CharaterType
	*************/
	char middle_initial{ 'j' };
	cout << "my middle initial is " << middle_initial << endl;

	/***********
	* integer types
	*************/
	unsigned short int exam_score{ 55 };
	cout << "my exam score was " << exam_score << endl;

	int country_represent{ 65 };
	cout << "There were " << country_represent <<" country represented in my meeting"<< endl;

	long people_in_florida{ 20610000 };
	cout << "There are about " << people_in_florida << " people in florida" << endl;

	long long people_on_earth{ 7600000000 };
	cout << "There are about " << people_on_earth << " people in florida" << endl;

	/***********
	* floating point type
	*************/

	float car_payment{ 401.23 };
	cout << "my car payment is " << car_payment << endl;

	double pi{ 3.14159 };
	cout << "Pi is " << pi<< endl;

	long double large_amount{ 2.7e120 };
	cout << large_amount<< "is a very big number"<<endl;

	/***********
	* boolean type
	*************/

	bool game_over{ false };
	cout << "the value of gameover is " << game_over << endl;

	/***********
	* over flow example 
	*************/

	short value1{ 30000 };
	short value2{ 10000 };
	short sum{ value1 + value2 };

	cout << "the sum of " << value1 << " and " << value2 << " is " << sum << endl;

	return 0;
}

