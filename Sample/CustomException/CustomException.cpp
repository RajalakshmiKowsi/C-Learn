// CustomException.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <exception>
#include <string>

class MyException : public std::exception {
public:
    MyException(const std::string& message) : message_(message) {}

    // Override the what() method to provide error description
    const char* what() const noexcept override {
        return message_.c_str();
    }

private:
    std::string message_;
};
double divideNumbers(double numerator, double denominator) {
    if (denominator == 0) {
        throw MyException("Division by zero is not allowed.");
    }
    return numerator / denominator;
}

int main()
{
    try {
        double result = divideNumbers(10.0, 0.0);
        std::cout << "Result: " << result << std::endl;
    }
    catch (const MyException& ex) {
        std::cout << "Error: " << ex.what() << std::endl;
    }

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
