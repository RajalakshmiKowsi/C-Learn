// FunctionWithDefeultArument.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
double cal_cost(double base_cost = 100.0, double tax_rate = 0.06, double shipping = 3.50);
void greeting(string name, string prefix = "Mr", string suffix = "");
void print(string s);
void print(string s, string t);

double cal_cost(double base_cost, double tax_rate, double shipping) 
{
    return base_cost += (base_cost * tax_rate) + shipping;
}
void greeting(string name, string prefix, string suffix)
{
    cout << "Hello" << prefix + " " + name + " " + suffix << endl;
}
void print(string s)
{
    cout << "printing string:" << s << endl;
}
void print(string s,string t)
{
    cout << "printing string:" << s <<"and"<<t<< endl;
}
int main()
{
    double cost{ 0 };
    cost= cal_cost();
    cout <<"Cost is"<<cost<<endl;
    greeting("Rajalakshmi");
    print("Raji");
    print("raja", "lakshmi");
}
