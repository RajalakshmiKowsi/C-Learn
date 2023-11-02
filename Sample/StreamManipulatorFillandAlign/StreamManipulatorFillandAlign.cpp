// StreamManipulatorFillandAlign.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<iomanip>
using namespace std;
int main()
{
	ifstream int_file;
	string line;
	int num;
	double total;
	int_file.open("C:\\Users\\rajal\\OneDrive\\Desktop\\C++Learn\\test.txt");
	if (!int_file)
	{
		cerr << "Problem opening file" << endl;
		return 1;
	}
	while (!int_file.eof()) {
		int_file >> line;
		cout<<line
			<<endl;
	}
	int_file.close();
	return 0;
}

