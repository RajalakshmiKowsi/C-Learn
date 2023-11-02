// streamManipulatorsIntegers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	int number{ 255 };
	cout << hex << number << endl;
	cout << dec << number << endl;
	cout << oct << number << endl;
	cout << showbase;
	cout << hex << number << endl;
	cout << dec << number << endl;
	cout << oct << number << endl;
	cout << showbase<<uppercase;
	cout << hex << number << endl;
	cout << dec << number << endl;
	cout << oct << number << endl;

	cout.setf(ios::showbase);
	cout.setf(ios::uppercase);
	cout.setf(ios::showpos);

	/*cout<< resetiosflags(ios::basefield);
	cout<< resetiosflags(ios::basefield);
	cout<< resetiosflags(ios::basefield);
	cout<< resetiosflags(ios::basefield);*/
	cout.setf(ios::uppercase);
	cout.setf(ios::showpos);
	cout << dec << number << endl;
	cout << oct << number << endl;
}

