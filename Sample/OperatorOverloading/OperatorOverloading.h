#ifndef _MYSTRING_H
#define _MYSTRING_H


class MyString
{
	friend bool operator==(const MyString& lhs, const MyString& rhs);
	friend MyString operator-(const MyString& obj);
	friend bool operator+(const MyString& lhs, const MyString& rhs);
	friend std::ostream& operator<<(std::ostream& os, const MyString& rhs);
	friend std::istream& operator>>(std::istream& in, MyString& rhs);
private:
	char* str;
	
public:
	MyString();//No overload

	MyString(const char* s);//Overloading constructor

	MyString(const MyString &s);//Copy constructor

	~MyString();

	void Display() const;
	int get_length() const;
	const char* get_str() const;
	MyString& operator=(const MyString& rhs);//CopyAssignment oprator
	MyString& operator=(const MyString&& rhs);// Move oprator
	MyString operator-() const; // Make lower case
	MyString operator+(const MyString & rhs) const;//Concate
	bool operator == (const MyString & rhs) const;

	

};




#endif