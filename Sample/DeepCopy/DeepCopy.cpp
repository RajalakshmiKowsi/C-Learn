// DeepCopy.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Deep {
private:
	int* data;
public:
	void set_data(int d) {
		*data = d;
	}
	int get_data() { return *data; }
	Deep(int d);
	Deep(const Deep& sourse);

	void display_shallow(Deep s)
	{
		cout << get_data() << endl;
	}
	~Deep();
};

Deep::Deep(int d)
{
	data = new int;
	*data = d;
}
Deep::Deep(const  Deep& sourse) :Deep( *sourse.data)
{
	cout << "Copy constructor-deep copy " << endl;
}
Deep::~Deep()
{
	delete data;
	cout << "Destructor-deep copy " << endl;
}
int main()
{
	Deep obj1(100);
	obj1.display_shallow(obj1);
	Deep obj2(obj1);
	obj1.display_shallow(1000);
}

