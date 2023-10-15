// ControllingAndProgramFlow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int num{};
    const int min{ 10 };
    const int max{ 100 };

    cout << "Enter a number between " << min << " and " << max << ":";
    cin >> num;
    if (num >= min)
    {
        cout << num << "is greater than " << min << endl;
    }

    int diff(num - min);
    cout << num << " is " << diff << " greater than " << min << endl;

    if (num <= max)
    {
        cout << num << "is less than or equal to" << max;
    }
    if (num >= min && num <= max)
    {
        cout << num << "is range" <<endl;

    }
    if (num >= min && num <= max)
    {
        cout << num << "is right on a boundry" << endl;
        cout << "this mean all 4 statements display" << endl;
    }
    int num1;
    const int target{ 10 };
    cout << "Enter a number and i compare to " << target << ":";
    cin >> num1;
    if (num1 >> target)
    {
        cout << num << "is grater than or equal" << endl;
    }
    else
    {
        cout << num << "is lesse than" << target<<endl;
    }
    int score{};
    cout << "Enter your sore on the exam(0-100)";
    cin >> score;
    char letter_grade{};
    if (score >= 0 && score <= 100)
    {
        if (score > 90)
        {
            letter_grade = 'A';
        }
        else if(score>80)
        {
            letter_grade = 'B';
        }
        else if (score > 70)
        {
            letter_grade = 'C';
        }
        else if (score > 60)
        {
            letter_grade = 'D';
        }
        else
        {
            letter_grade = 'F';
        }

        char letter_grade{};
        cout << "Enter the letter grade you expect on the exam";
        cin >> letter_grade;
        switch (letter_grade)
        {
        case 'a':
        case 'A':
            cout << "you need a 90 or above,study hard!" << endl;
            break;
        case 'b':
        case 'B':
            cout << "you need 80-89 for a B,go study!" << endl;
            break;
        case 'c':
        case 'C':
            cout << "you need 70-79 for an average grade" << endl;
            break;
        case 'd':
        case 'D':
            cout << "hmm, you should stripe for a better grade.All you need is 60-69" << endl << endl;
            break;
      
        default:
            cout << "Ok" << endl;
            break;
        }

        enum Direction
        {
            left, right, down, up
        };
        Direction healding{ left };

        switch (healding)
        {
        case left:
            cout << "Going left" << endl;
            break;
        case right:
            cout << "Going right" << endl;
            break;
        default:
            cout << "Ok" << endl;

            break;
        }


    }
    int n{};

    cout << "enter  number" << endl;
    cin >> n;
    if (n % 2 == 0)
    {
        cout <<n<<"is even"<< endl;
    }
    else
    {
        cout << n << "is odd" << endl;
    }

    cout <<n<< "is" << (n % 2 == 0 ? "EVEN" : "ODD") << endl;
}

