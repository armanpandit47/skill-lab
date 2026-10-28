#include <iostream>
using namespace std;

class vehicle
{
public:
    string brand = "BMW";

    void hunk()
    {
        cout << "Hello vehicle" << endl;
    }
};

class car : public vehicle
{
public:
    string model = "M5";
};

class cycle : public car
{
public:
    void display()
    {
        cout << "This is cycle" << endl;
    }
};

class privatejet : public cycle
{
public:
    void p()
    {
        cout << "This is privatejet" << endl;
    }
};

int main()
{
    privatejet obj;

    cout << "Brand: " << obj.brand << endl;
    cout << "Model: " << obj.model << endl;

    obj.hunk();
    obj.display();
    obj.p();

    return 0;
}