

#include <iostream>
#include<string>
using namespace std;

class Player
{
private:
	string name;
	int health;
	int xp;
public:
	
	Player();
	Player(string name_val);
	Player(string name_val,int health,int x);
};
Player::Player() :name{ "None" }, health{ 0 }, xp{ 0 }{}
Player::Player(string name_val) : name{ "None" }, health{ 0 }, xp{ 0 }{}
Player::Player(string name_val, int health, int x) : name{ "None" }, health{ 0 }, xp{ 0 }{}

int main()
{
    std::cout << "Hello World!\n";
}
