// STLTemplateClass.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include <iostream>
#include<string>
#include<vector>
template<typename T>
class item
{
private:
	std::string name;
	T value;
public :
	item(std::string name, T value):name{name},value{value}
	{

	}
	std::string get_name() const { return name; }
	T get_value() const { return value };
};

template <typename T1,typename T2>
struct my_pair
{
	T1 first;
	T2 secound;
};
int main()
{
	item<int> item1{ "frank",100 };
	std::cout << item1.get_name() << " " << item1.get_value() << std::endl;
	item<std::string> item2 {"frank1","Rajalakshmi2"};
	


}

