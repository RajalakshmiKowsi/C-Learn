// STLFunctionTemplate.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

template<typename T>

T min(T a, T b)
{
	return (a < b) ? a : b;
}

template<typename T1, typename T2>

	void func(T1 a, T2 b)
	{
		std::cout << a << " " << b << std::endl;
	}
	/*struct Person
	{
		std::string name;
		int age;
		bool operator(const Person& rhs)const{

		}
	};*/
	template<typename T>
	void swap(T& a, T& b)
	{
		T temp = a;
		a = b;
		b = temp;
	}

int main()
{
	std::cout << min<int>(2, 5) << std::endl;
	std::cout << min(2, 5) << std::endl;
	std::cout << min('A', 'B') << std::endl;
	std::cout << min(1.5, 9.2) << std::endl;
	std::cout << min(5+2*2, 7+40) << std::endl;

	func<int, int>(10, 20);
	func(20, 30);
	func(1000, "Testing");
	func<char, double>('A', 12.4);
	int x{ 100 };
	int y{ 200 };
	swap(x, y);
	std::cout << x<< y<< std::endl;
}

