#include <iostream>
using namespace std;

class vehicle
{
public:
    void bus()
    {
        cout << "This is a bus" << endl;
    }
};

class car : public vehicle
{
public:
    void mode()
    {
        cout << "This is a mode" << endl;
    }
};

class fare
{
public:
    void cost()
    {
        cout << "This is a fare" << endl;
    }
};

class bus : public vehicle, public fare
{
public:
    void speed()
    {
        cout << "This is a 60 speed" << endl;
    }
};

int main()
{
    bus b;

    b.cost();
    b.speed();

    return 0;
}