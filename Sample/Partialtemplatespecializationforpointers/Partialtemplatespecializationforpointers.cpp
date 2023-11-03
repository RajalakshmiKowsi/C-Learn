// Partialtemplatespecializationforpointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
template <typename T>
class PartialTemplate
{
private:
	T m_value;
public:
	PartialTemplate(T value)
		: m_value{ value }
	{
	}

	~PartialTemplate()
	{
	}

	void print() const
	{
		std::cout << m_value << '\n';
	}
};
template <typename T>
class PartialTemplate<T*>
{
private:
	T* m_value;
public:
	PartialTemplate(T* value)
		: m_value{ new T { *value } } // this copies a single value, not an array
	{
	}

	~PartialTemplate()
	{
		delete m_value;
	}

	void print() const
	{
		std::cout << *m_value << '\n';
	}
};
template <>
class PartialTemplate<char*>
{
private:
	char* m_value;
public:
	// Full specialization of constructor for type char*
	PartialTemplate(char* value)
	{
		// Figure out how long the string in value is
		int length{ 0 };
		while (value[length] != '\0')
			++length;
		++length; // +1 to account for null terminator

		// Allocate memory to hold the value string
		m_value = new char[length];

		// Copy the actual value string into the m_value memory we just allocated
		for (int count = 0; count < length; ++count)
			m_value[count] = value[count];
	}

	// Full specialization of destructor for type char*
	~PartialTemplate()
	{
		delete[] m_value;
	}

	// Full specialization of print function for type char*
	// Without this, printing a Storage<char*> would call Storage<T*>::print(), which only prints the first char
	void print() const
	{
		std::cout << m_value;
	}
};

int main()
{
	PartialTemplate<int> myint{ 5 };
	myint.print();

	// Declare a pointer Storage to show it works
	int x{ 7 };
	PartialTemplate<int*> myintptr{ &x };

	// If myintptr did a pointer assignment on x,
	// then changing x will change myintptr too
	x = 9;
	myintptr.print();

	// Dynamically allocate a temporary string
	char* name{ new char[40] { "Alex" } };

	// Store the name
	PartialTemplate<char*> myname{ name };

	// Delete the temporary string
	delete[] name;

	// Print out our name to prove we made a copy
	myname.print();
}

