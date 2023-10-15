// loop.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;

int main()
{
	for (int i{ 1 };i <= 10; i++)
	{
		cout << i << endl;
	}
	for (int i{ 1 };i <= 10;i += 2)
	{
		cout << i << endl;
	}

	for (int i{ 10 };i > 0;--i)
	{
		cout << i << endl;
	}
	for (int i{ 10 };i <= 100;i += 10)
	{
		if (i % 15 == 0)
			cout << i << endl;
	}
	for (int i{ 1 }, j{ 5 };i <= 5;++i, ++j)
	{
		cout << i << "+" << j << "=" << (i + j) << endl;

	}
	vector<int> nums{ 10,20,30,40,50 };
	for (unsigned i(0);i < nums.size();++i)
	{
		cout << nums[i] << endl;
	}

	int scores[]{ 10,20,30 };
	for (auto score : scores)
	{
		cout << score << endl;
	}

	vector<double> temperatures{ 87.9,77.9,88.0,72.5 };
	double average_temp{};
	double total{};
	for (auto temp : temperatures)
		total += temp;
	if (temperatures.size() != 0)
	{
		average_temp = total / temperatures.size();
	}
	cout << "Average temperature is" << average_temp << endl;
	cout << endl;

	for (auto val : { 1,2,3,4 })
	{
		cout << val << endl;
	}

	for (auto c : "This is a test")
		if (c==' ')
		{
			cout << "\t";
		}
		else
		{
			cout << c;
		}

	int n1{};
	int i{ 1 };
	int num1{};
	cout << "Enter a poistive integer -start the countdown";
	cin >> n1;
	while (n1>0)
	{
		cout << n1 << endl;
		--n1;
	}
	cout << "Enter a poistive integer -start the countdown";
	cin >> num1;
	while (num1 >= i)
	{
		cout << i << endl;
		i++;
	}
	int num2{};
	cout << "Enter a less than 100"<<endl;
	cin >> num2;
	while (num2 >= 100)
	{
		cout << "Enter a less than 100"<<endl;
		cin >> num2;
	}
	cout << "Thanks" <<endl;

	bool done{ false };
	int number{ 0 };
	while (!done)
	{
		cout << "Enter an integer between 1 and 5:" << endl;
		cin >> number;
		if (number <= 1 || number >= 5)
		{
			cout << "out of range,try again" << endl;
		}
		else
		{
			cout << "Thanks" << endl;
			done = true;

		}
	}

	//Nested loop

	for (int i{1};i <= 10;++i)
	{
		for (int j{1}; j <= 10; ++j)
		{
			cout << i << "*" << j << "=" << i * j << endl;

		}
		cout << "_________________" << endl;
	}

}
	


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
