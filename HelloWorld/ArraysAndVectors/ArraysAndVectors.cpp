// ArraysAndVectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>

using namespace std;
int main()
{
	char vowels[]{ 'a','e','i','o','u' };
	cout << "\nThe first vowel is: " << vowels[0] << endl;
	cout << "the last vowel is: " << vowels[4] << endl;

	double hi_temps[]{ 90.1,89.8,77.5,81.16 };
	cout << "\nThe first high temperature is :" << hi_temps[0] << endl;

	hi_temps[0] = 100.7; //set the first element in hi_temps to 100.7;

	cout << "the first high temperature is now"<<hi_temps[0]<<endl;

	int test_score[5];

	cout << "\n First score at index 0:" << test_score[0] << endl;
	cout << "Secound score at index 1:" << test_score[1] << endl;

	cout << "\n Enter 5 test scores :";
	cin >> test_score[0];
	cin >> test_score[1];
	cin >> test_score[2];
	cin >> test_score[3];
	cin >> test_score[4];

	cout << "\n First score at index 0:" << test_score[0] << endl;
	cout << "Secound score at index 1:" << test_score[1] << endl;
	cout << "Third score at index 2:" << test_score[2] << endl;
	cout << "fourth score at index 3:" << test_score[3] << endl;
	cout << "fifth score at index 4:" << test_score[4] << endl;

	//Vector name

	vector<char> vowels{ 'a','e','i','o','u' };

	cout << vowels[0] << endl;
	cout << vowels[4] << endl;

	vector<int> test_scores1{ 100,98,89 };

	cout << "\n First score at index 0:" << test_scores1[0] << endl;
	cout << "Secound score at index 1:" << test_scores1[1] << endl;
	cout << "Third score at index 2:" << test_scores1[2] << endl;


}

