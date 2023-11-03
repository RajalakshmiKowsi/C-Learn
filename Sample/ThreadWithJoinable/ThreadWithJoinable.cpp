// ThreadWithJoinable.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<chrono>
#include<thread>
using namespace std;
void run(int count)
{
	while (count-->0)
	{
		cout << "CppNuts" << endl;
	}
	std::this_thread::sleep_for(chrono::seconds(5));
}

int main()
{
	std::thread t1(run, 10);
	cout << "Main()" << endl;
	t1.join();
	if (t1.joinable())
	{
		t1.join();
	}
	cout << "main() after" << endl;
	return 0;
}

