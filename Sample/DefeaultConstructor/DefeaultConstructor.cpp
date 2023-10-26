// DefeaultConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
class Player
{
private:
	std::string name;
	int health;
	int xp;
public:
	void set_name(std::string name_val)
	{
		name = name_val;
	}
	std::string get_name()
	{
		return name;
	}
	Player(std::string name_val, int health_val, int x)
	{
		name = name_val;
		health = health_val;
		xp = x;
	}
};
int main()
{

}

