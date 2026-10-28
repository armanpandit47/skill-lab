#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
    string vehicleNumber;
    string ownerName;
    int hours;

public:
    Vehicle(string number, string owner, int h) {
        vehicleNumber = number;
        ownerName = owner;
        hours = h;
    }

    void showDetails() {
        cout << "Vehicle Number: " << vehicleNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Parking Hours: " << hours << endl;
    }

    virtual int calculateFee() {
        return 0;
    }
};
class Bike : public Vehicle {
public:
    Bike(string number, string owner, int h)
        : Vehicle(number, owner, h) {}

    int calculateFee() override {
        return hours * 10;
    }
};
class Car : public Vehicle {
public:
    Car(string number, string owner, int h)
        : Vehicle(number, owner, h) {}

    int calculateFee() override {
        return hours * 20;
    }
};
class Truck : public Vehicle {
public:
    Truck(string number, string owner, int h)
        : Vehicle(number, owner, h) {}

    int calculateFee() override {
        return hours * 50;
    }
};
int main() {
    Bike b1("UP65AB1234", "Aman", 3);
    Car c1("UP65CD5678", "Rahul", 4);
    Truck t1("UP65EF9012", "Rohit", 2);

    cout << "===== BIKE DETAILS =====" << endl;
    b1.showDetails();
    cout << "Parking Fee: Rs. " << b1.calculateFee() << endl;

    cout << "\n===== CAR DETAILS =====" << endl;
    c1.showDetails();
    cout << "Parking Fee: Rs. " << c1.calculateFee() << endl;

    cout << "\n===== TRUCK DETAILS =====" << endl;
    t1.showDetails();
    cout << "Parking Fee: Rs. " << t1.calculateFee() << endl;

    return 0;
}