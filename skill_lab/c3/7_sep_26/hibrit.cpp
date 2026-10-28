#include <iostream>
using namespace std;

class vehicle
{
public:
    void travel()
    {
        cout << "in this vehicle class" << endl;
    }
};

class fare
{
public:
    void fare_a()
    {
        cout << "it is fare class" << endl;
    }
};

class car : public vehicle
{
public:
    void car_travel()
    {
        cout << "it is car class" << endl;
    }
};

class bus : public vehicle, public fare
{
public:
    void bus_travel()
    {
        cout << "bus colour is yellow" << endl;
    }
};

int main()
{
    bus obj;

    obj.bus_travel();
    obj.fare_a();
    obj.travel();

    return 0;
}
