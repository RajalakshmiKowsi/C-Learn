// string.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>

using namespace std;
int main()
{
	char first_name[20]{};
	char last_name[20]{};
	char full_name[20]{};
	char temp[20]{};
	char full_name1[20]{};
	cout << "please enter your first name" << endl;
	cin >>first_name;

	cout<<"please enter your last name" << endl;
	cin >>last_name;

	cout << "Hello, " << first_name << "your first name has " << strlen(first_name) << " charcters" << endl;
	cout << "and your last name, " << last_name << "has" << strlen(last_name) << " charcters" << endl;

	strcpy_s(full_name, first_name);
	strcat_s(full_name, " ");
	strcat_s(full_name, last_name);
	cout << "your full name is" << full_name << endl;

	cout << "please enter your full name" << endl;
	cin.getline(full_name1, 50);
	cout << "your full name is " << full_name1<<endl;

	strcpy_s(temp, full_name1);
	if (strcmp(temp, full_name1) == 0)
	{
		cout << "temp" << full_name1 << "are the same"<<endl;

	}
	else
	{
		cout << "temp" << full_name1 << "are the diffrent" << endl;

	}

	string s0{};
	string s1{ "Apple" };
	string s2{ "Banana" };
	string s3{ "Kiwi" };
	string s4{ "apple" };
	string s5{ s1 };
	string s6{ s1,0,3 };
	string s7{ 10,'X'};

	cout << s0 << endl;
	cout << s0.length()<<endl;

	cout << "--------------------" << endl;
	cout << "S1 is initialized to:" <<s1<< endl;
	cout << "S2 is initialized to:" <<s2<< endl;
	cout << "S3 is initialized to:" <<s3<< endl;
	cout << "S4 is initialized to:" <<s4<< endl;
	cout << "S5 is initialized to:" <<s5<< endl;
	cout << "S6 is initialized to:" <<s6<< endl;
	cout << "S7 is initialized to:" <<s7<< endl;

	cout << "Comparision" << endl;

	cout << boolalpha;

	cout << s1 << "==" << s5 << ":" << (s1 == s5) << endl;
	cout << s1 << "==" << s2 << ":" << (s1 == s2) << endl;
	cout << s1 << "!=" << s2 << ":" << (s1 != s2) << endl;
	cout << s1 << "<" << s2 << ":" << (s1 < s2) << endl;
	cout << s2 << ">" << s1 << ":" << (s2 > s1) << endl;
	cout << s4 << "<" << s5 << ":" << (s4 < s5) << endl;
	cout << s1 << "==" << "Apple" << ":" << (s1=="Apple") << endl;

	//Assignment

	s1 = "Watermelon";
	cout << "s1 is now" <<s1<< endl;
	s2 = s1;
	cout << "s2 is now" <<s2<< endl;
	s3 = "Frank";
	cout << "s3 is now" << s3 << endl;
	s3[0] = 'c';
	cout << "s3 change first letter to C:" <<s3 <<endl;
	s3.at(0) = 'p';
	cout << "s3 change first letter to P:" << s3 << endl;

	// Concatenation

    s3 = "Watermelon";
    cout << "\nConcatenation" << "\n------------------------------------------" << endl;

    s3 =  s5 + " and " + s2 + " juice";     // Apple and Banana juice
    cout << "s3 is now: " << s3 << endl;    // Apple and Banana Juice

	//  for loop
//    cout << "\nLooping" << "\n------------------------------------------" << endl;
//    
	s1 = "Apple";
	for (size_t i{0}; i < s1.length(); ++i)
	{
		cout << s1.at(i);
	}
	cout << endl;

	for (char c : s1)
	{
		cout << c;
		cout << endl;

	}

	/*Substring*/
		    cout << "\nSubstring" << "\n------------------------------------------" << endl;
		    s1 = "This is a test";
		
		    cout << s1.substr(0,4) << endl;	    // This
		    cout << s1.substr(5,2) << endl;	    // is
		    cout << s1.substr(10,4) << endl;   	// test
			 /*Erase*/
    cout << "\nErase" << "\n------------------------------------------" << endl;
  
    s1 = "This is a test";
    s1.erase(0,5);     // Erase This from s1 results in "is a test"
    cout << "s1 is now: " << s1<< endl;     // is a test



 /*Find*/
    cout << "\nfind" << "\n------------------------------------------" << endl;

    s1 = "The secret word is Boo";
    string word {};
    
    cout << "Enter the word to find: ";
    cin >> word;
    
    size_t position = s1.find(word);
    if (position != string::npos)
        cout << "Found " << word << " at position: " << position << endl;
    else
        cout << "Sorry, " << word <<  " not found" << endl;

			cout << endl;

}

