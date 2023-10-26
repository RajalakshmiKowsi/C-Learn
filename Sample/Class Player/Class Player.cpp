
#include <iostream>
#include <string>
using namespace std;
class Player
{
public:
	string name;
	int health;
	int xp;
	void talk(string text_to_say) {
		cout << name << "says" << text_to_say << endl;
	};
	bool is_dead();
};

class Player1
{
private:
	string name;
	int health;
	int xp;
public:
	
	void set_name(std::string names)
	{
		name = names;
	}

	Player1()
	{
		cout << "No args constrctor called" << endl;
	}
	Player1(std::string name)
	{
		cout << "string are constructor called" << endl;
	}
	Player1(std::string name,int health,int xp)
	{
		cout << "three args constructor called" << endl;
	}
	~Player1()
	{
		cout << " destrctor called for	" << endl;
	}
};
int main()
{
	Player frank;
	Player hero;
	frank.name = "Frank";
	frank.health = 100;
	frank.xp = 12;
	frank.talk("hi there");
	Player* enemy = new Player;
	(*enemy).name = "Enemy";
	(*enemy).health = 100;
	enemy->xp = 15;
	enemy->talk("I will destroy you");
	/*Account frank_account;
	frank_account.name = "Frank account";
	frank_account.balance = 200.34;
	frank_account.deposit(10000.0);
	frank_account.withdraw(500.0);*/
	Player1 player;
	player.set_name("Raji");
};
class Account
{
public:
	string name;
	double balance;

	bool deposit(double bal) { balance += bal; cout << "In deposit" << endl; }
	bool withdraw(double bal) { balance -= bal; cout << "In widthdraw" << endl; };
};


