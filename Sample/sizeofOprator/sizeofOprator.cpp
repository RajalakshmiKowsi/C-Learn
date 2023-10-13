// sizeofOprator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
  cout << "size of information\n";
  cout << "_______________";
  cout << "Char:"<<sizeof(char)<<"bytes"<<endl;
  cout << "Int:"<<sizeof(int)<<"bytes"<<endl;
  cout << "Unsigned Int:"<<sizeof(unsigned int)<<"bytes"<<endl;
  cout << "short:"<<sizeof(short)<<"bytes"<<endl;
  cout << "long:"<<sizeof(long)<<"bytes"<<endl;
  cout << "long long:"<<sizeof(long long)<<"bytes"<<endl;

  cout << "float:" << sizeof(float) << "bytes" << endl;
  cout << "Double:" << sizeof(double) << "bytes" << endl;
  cout << "long Double:" << sizeof(long double) << "bytes" << endl;

  cout << "use value defined in\n";
  cout << "Char:" << CHAR_MIN << endl;
  cout << "Int:" << INT_MIN  << endl;
  cout << "short:" <<SHRT_MIN << "bytes" << endl;
  cout << "long:" <<LONG_MIN << "bytes" << endl;


}

