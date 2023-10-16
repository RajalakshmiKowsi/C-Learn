// PassbyReferenceAndConst.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int& num);
void pass_by_ref2(string& s);
void pass_by_ref3(vector<string>& v);
void print_vector(const vector<string>& v);  // const

void pass_by_ref1(int& num) {
    num = 1000;
}

void pass_by_ref2(string& s) {
    s = "Changed";
}

void pass_by_ref3(vector<string>& v) {
    v.clear();  // delete all vector elements
}

void print_vector(const vector<string>& v) {
    //v.at(100); error becase const 
    for (auto s : v)
        cout << s << " ";
    cout << endl;
}

int main() {
    int num{ 10 };
    int another_num{ 20 };

    cout << "num before calling pass_by_ref1: " << num << endl;
    pass_by_ref1(num);
    cout << "num after calling pass_by_ref1: " << num << endl;

    cout << "\nanother_num before calling pass_by_ref1: " << another_num << endl;
    pass_by_ref1(another_num);
    cout << "another_num after calling pass_by_ref1: " << another_num << endl;

    string name{ "Frank" };
    cout << "\nname before calling pass_by_ref2: " << name << endl;
    pass_by_ref2(name);
    cout << "name after calling pass_by_ref2: " << name << endl;

    vector<string> stooges{ "Larry", "Moe", "Curly" };
    cout << "\nstooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout << "stooges after calling pass_by_ref3: ";
    print_vector(stooges);

    cout << endl;
    return 0;
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
