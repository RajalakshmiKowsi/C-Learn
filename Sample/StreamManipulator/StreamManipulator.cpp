// StreamManipulator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "noboolalpbha -defeult (10==10)" << (10==20)<<endl;
	cout << "noboolalpbha -defeult (10==20)" <<(10==10)<< endl;
	cout << boolalpha;
	cout << "boolalpbha -defeult (10==20)" << (10 == 10) << endl;
	cout << "boolalpbha -defeult (10==20)" << (10 == 20) << endl;

	cout << "boolalpbha -defeult (10==20)" << (10 == 10) << endl;
	cout << "boolalpbha -defeult (10==20)" << (10 == 20) << endl;

	cout << noboolalpha;
	cout << "boolalpbha -defeult (10==20)" << (10 == 10) << endl;
	cout << "boolalpbha -defeult (10==20)" << (10 == 20) << endl;

	cout << resetiosflags(ios::boolalpha);
	cout << "boolalpbha -defeult (10==20)" << (10 == 10) << endl;
	cout << "boolalpbha -defeult (10==20)" << (10 == 20) << endl;
}

