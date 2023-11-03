// Partial template specialization.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
using namespace std;
template <typename T>
T addAll(std::vector<T> list)
{
	T count = 0;
	for (auto& elem;list)
	{
		count += elem;
	}
	return count;
}
//template <>
//string addAll(std::vector<std::string> list)
//{
//	int count = 0;
//	for (const string &elem:list)
//	{
//		for (const char& chr : elem)
//		{
//			count += chr;
//		}
//	}
//	ostringstream Ostr1;
//	Ostr1 << count;
//	string strcount = Ostr1.str();
//	return strcount;
//}
int main()
{
	vector<int> vecInt = { 4,5,6,7,5,6,1 };

	vector<double> vecDouble = { 4.0,3.0,2.0,5.0,6.0,1.0 };

	cout << addAll(vecInt) << endl;

	cout << addAll(vecDouble) << endl;

}

