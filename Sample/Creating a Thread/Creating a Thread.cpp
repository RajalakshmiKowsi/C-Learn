// Creating a Thread.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <thread>
using namespace std;
void fun(int x)
{
	while (x -->0)
	{
		cout << x << endl;
	}
}
class Base
{
public:
	void Fun1 (int x){
		while (x-->0)
		{
			cout << x << endl;
		}
	}
};
class Base1
{
public:
	static void Fun1(int x) {
		while (x-- > 0)
		{
			cout << x << endl;
		}
	}
};

int main()
{
	std::thread t(fun, 10);
	t.join();

	//lamda function
	auto fun1 = [](int x)
	{
		while (x-- > 0)
		{
			cout << x << endl;
		}
	};
	std::thread t2(fun1, 10);
	t2.join();

	Base b;
	std::thread t3(&Base::Fun1, &b, 10);
	t3.join();
	std::thread t4(&Base1::Fun1, 10);
	t4.join();

}
