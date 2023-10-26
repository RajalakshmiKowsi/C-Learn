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

}

