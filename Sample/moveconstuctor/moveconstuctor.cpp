// moveconstuctor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
class Move {
private:
	int* data;
public:
	void set_data(int d) {
		*data = d;
	}
	int get_data() { return *data; }
	Move(int d);
	Move(const Move& sourse);
	Move(Move&& sourse)noexcept;
	void display_shallow(Move s)
	{
		cout << get_data() << endl;
	}
	~Move();
};

Move::Move(int d)
{
	data = new int;
	*data = d;
}
Move::Move(const  Move& sourse) :Move(*sourse.data)
{
	cout << "Copy constructor-deep copy " <<data<< endl;
}
Move::~Move()
{
	delete data;
	cout << "Destructor-deep copy " <<data<< endl;
}
Move::Move(Move&& sourse)noexcept :data{ sourse.data }
{
	sourse.data = nullptr;
	cout << "Moving constructor -moving resouses " << *data<< endl;
}
int main()
{
	vector<Move> vec;
	vec.push_back(Move(10));
	vec.push_back(Move(20));
	vec.push_back(Move(30));
	vec.push_back(Move(40));
	vec.push_back(Move(50));
	vec.push_back(Move(60));
	vec.push_back(Move(70));
	vec.push_back(Move(80));
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
