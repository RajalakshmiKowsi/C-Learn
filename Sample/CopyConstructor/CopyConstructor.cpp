// CopyConstructor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
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
	// copy constructor;
	Player();
	Player(const Player& sourse);
};

Player::Player(const Player& sourse):name(sourse.name),health(sourse.health),xp(sourse.xp)
{
	std::cout << "copy constructor - made copy of:" << sourse.name << std::endl;

}
int main()
{
	/*Player empty;
	Player my_new_object{ empty };*/
    std::cout << "Hello World!\n";
}

