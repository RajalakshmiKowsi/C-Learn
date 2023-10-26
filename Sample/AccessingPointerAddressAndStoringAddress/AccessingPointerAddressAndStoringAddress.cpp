// AccessingPointerAddressAndStoringAddress.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
using namespace std;
void double_data(int *int_ptr)
{
	*int_ptr *= 2;
}
int* create_array(size_t size, int int_value = 0)
{
	int* new_storage(nullptr);
	new_storage = new int[size];
	for (size_t i{ 0 };i < size;++i)
	{
		*(new_storage + i) = int_value;
	}
	return new_storage;
}
void display(const int* const arrays, size_t t)
{
	for (size_t i{ 0 };i < t;i++)
	{
		cout << arrays[i] << endl;
	}
}
int main()
{
	int num{ 20 };
	cout << "Value of num is: " << num << endl;
	cout << "size of num is: " << sizeof num << endl;
	cout << "address of num is: " <<&num << endl;

	int* p;
	p = nullptr;

	cout << "Value of p is: " << p << endl;
	cout << "size of p is: " << sizeof p << endl;
	cout << "address of p is: " << &p << endl;

	int* p1{nullptr};
	double* p2{nullptr};
	unsigned long long* p3{ nullptr };
	vector<string> *p4{ nullptr };
	string* p5{ nullptr };
	int* my_array{ nullptr };
	size_t size;
	int int_value{};
	cout << "how many integer would you like to allocate";
	cin >> size;
	cout << "what value would you like tham to inizilized";
	cin >> int_value;
	my_array = create_array(size, int_value);

	display(my_array, size);


	cout << "size of p1 is: " << sizeof p1 << endl;
	cout << "size of p2 is: " << sizeof p2 << endl;
	cout << "size of p3 is: " << sizeof p3 << endl;
	cout << "size of p4 is: " << sizeof p4 << endl;
	cout << "size of p5 is: " << sizeof p5 << endl;

	
	int score{ 10 };
	double high_temp{ 100.7 };
	int* score_ptr{ nullptr };
	score_ptr = &score;

	cout << "Value of score is: " << score << endl;
	cout << "address of score is: " << &score << endl;
	cout << "Value of score_ptr is: " << *score_ptr << endl;
	*score_ptr = 200;

	cout << "Value of score is: " << score << endl;
	cout << "Value of score_ptr is: " << *score_ptr << endl;

	double high_tem{ 100.7 };
	double low_tem{ 37.4 };
	double *temp_ptr{ &high_tem };
	cout << *temp_ptr << endl;
	temp_ptr = &low_tem;
	cout << *temp_ptr << endl;

	string name{ "Frank" };
	string* string_ptr{ &name };
	cout << *string_ptr << endl;
	name = "Raji";
	cout << *string_ptr << endl;

	vector<string> stooges{ "Larry","Moe","Currly" };
	vector<string>* vector_ptr{ nullptr };
	vector_ptr = &stooges;
	cout << "First stoage:" << (*vector_ptr).at(0) << endl;
	cout << "stooges"<<endl;
	for (auto stooge: *vector_ptr)
	{
		cout << stooge << endl;

 	}
	int* int_ptr{ nullptr };
	int_ptr = new int;	
	cout << int_ptr<<endl;
	delete int_ptr;
	cout <<endl;
	size_t size1{ 0 };
	double* temp_ptr1{ nullptr };
	cout << "how many temps?" << endl;
	cin >> size1;
	temp_ptr1 = new double[size1];
	cout << temp_ptr1 << endl;
	delete[] temp_ptr1;

	int scores1[]{ 100,95,90 };
	cout << "value of scores:" <<scores1<< endl;

	int* scores_ptr{ scores1 };

	cout << "value of scores_ptr:" << scores_ptr << endl;

	cout << "\n Array subsciption notation............." << endl;
	cout << scores1[0] << endl;
	cout << scores1[1] << endl;
	cout << scores1[2] << endl;
	cout << "\n pointer subsciption notation............." << endl;
	cout << scores_ptr[0] << endl;
	cout << scores_ptr[1] << endl;
	cout << scores_ptr[2] << endl;
	cout << "\n pointer offset notation............." << endl;
	cout << *scores_ptr<< endl;
	cout << *(scores_ptr+1)<< endl;
	cout << *(scores_ptr+2)<< endl;
	cout << "\n array offset notation............." << endl;
	cout << *scores1 << endl;
	cout << *(scores1 + 1) << endl;
	cout << *(scores1 + 2) << endl;
	int array_scores[]{ 100,95,85,68,-1 };
	int* array_scores_ptr {array_scores};
	while (*array_scores_ptr != -1)
	{
		cout << *array_scores_ptr << endl;
		array_scores_ptr++;
	}
	array_scores_ptr = array_scores;
	while (*array_scores_ptr != -1)
	{
		cout << *array_scores_ptr++ << endl;
		
	}
	string s1{ "Frank" };
	string s2{ "James" };
	string s3{ "Frank" };

	string* ptr1{ &s1 };
	string* ptr2{ &s2 };
	string* ptr3{ &s1 };
	cout << boolalpha;
	cout << ptr1 << "==" << ptr2 << ":" << (ptr1 == ptr2) << endl;
	cout << ptr1 << "==" << ptr3 << ":" << (ptr1 == ptr3) << endl;
	/*cout << *ptr1 << "==" << *ptr2 << ":" << (*ptr1 == *ptr2) << endl;
	cout << *ptr1 << "==" << *ptr3 << ":" << (*ptr1 == *ptr3) << endl;*/

	char name1[]{ "Frank" };
	char* char_ptr1{ nullptr };
	char* char_ptr2{ nullptr };
	char_ptr1 = &name1[0];
	char_ptr2 = &name1[3];

	cout <<"In the string"<< name1 << "," << *char_ptr2 << "is" << "charcters away from " << *char_ptr1 << endl;

	int value{ 10 };
	int* int_ptr1{ nullptr };
	cout << "value" << value << endl;
	double_data(&value);
	cout << "value" << value << endl;
	int_ptr1 = &value;
	double_data(int_ptr1);
	cout << "value" << value << endl;

}
