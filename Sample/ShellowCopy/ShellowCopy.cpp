// ShellowCopy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
class Shallow {
private:
	int* data;
public:
	void set_data(int d) {
		*data = d;
	}
	int get_data() { return *data; }
	Shallow(int d);
	Shallow(const Shallow& sourse);
	
	void display_shallow(Shallow s)
	{
		cout << get_data() << endl;
	}
	~Shallow();
};

Shallow::Shallow(int d)
{
	data = new int;
	*data = d;
}
Shallow::Shallow(const  Shallow& sourse):data(sourse.data)
{
	cout << "Copy constructor-shallow copy " << endl;
}
Shallow::~Shallow()
{
	delete data;
	cout << "Destructor-shallow copy " << endl;
}
int main()
{
	Shallow obj1(100);
	obj1.display_shallow(obj1);
	Shallow obj2(obj1);
	obj1.display_shallow(1000);
}

