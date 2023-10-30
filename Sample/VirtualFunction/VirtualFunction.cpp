// VirtualFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
 class Instrument 
{
public:
  /* virtual void MakeSound()
    {
        cout << "Instrument is playing" << endl;
    }*/
    virtual void MakeSound1() = 0;

    Instrument()
    {
         cout << "Instrument is Constructor" << endl;
    }
    virtual void MakeSound() {
        cout << "Instrument is playing MakeSound" << endl;
    }
  virtual  ~Instrument() {
        cout << "Instrument is Destructor" << endl;
    };
   
};

class Accordine final:public Instrument
{
public:
    Accordine()
    {
        cout << "Accordine is Constructor" << endl;
    }
    void MakeSound() override final
    {
        cout << "Accordine is playing" << endl;
    }
    ~Accordine() {
        cout << "Accordine is Destructor" << endl;
    };
};
class Pieno :public Accordine
{
public:

    Pieno()
    {
        cout << "Pieno is Constructor" << endl;
    }
   /* void MakeSound()
    {
        cout << "Pieno is playing" << endl;
    }*/
    ~Pieno() {
        cout << "Pieno is Destructor" << endl;
    }
};
int main()
{
    Instrument *i1 = new Accordine();
    Instrument* i2 = new Pieno();

    Instrument* instruments[2] = { i1,i2 };

    for (int i{ 0 };i < 2;i++)
    {
        instruments[i]->MakeSound();
    }
     delete i1;
     delete i2;
}
