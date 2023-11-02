// WriteFile.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<fstream>
#include<string>


int main()
{
	std::ofstream out_file{"../output.txt",std::ios::app};
	std::ifstream in_file;
	in_file.open("C:\\Users\\rajal\\OneDrive\\Desktop\\C++Learn\\test.txt");
	if (!in_file)
	{
		std::cerr << "error file reading";
	}
	if (!out_file)
	{
		std::cerr << "error file creating";
	}
	std::string line;

	/*std::cout << "Enter something to write the file ";
	std::getline(std::cin, line);*/
	while (std::getline(in_file,line))
	{
		out_file << line << std::endl;
	}
	
	out_file.close();
	in_file.close();
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
