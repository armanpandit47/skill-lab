#include<iostream>
using namespace std;
class vechicle 
{
    protected:
    string vechicleNumber;
    string OnwerName;
    int hours;
    public:
    vechicle(string v, string n, int h)
    {
        vechicleNumber = v;
        OnwerName = n;
        hours = h;
    };
    void ShowDetails()
    {
        cout<<"vechicleNumber"<<endl;
        cout<<"OnwerName"<<endl;
        cout<<"hours"<<endl;
    }
    vechicle int calculateFee() = 0;
};
class child : public parent
{
    void calculateFee()override
    {
        string = Bike;
        string = car;
        string = truck;
    };
    public:
    type(string B, string C, string T)
    {
        Bike = B;
        car = C;
        truck = T;

    }
};
int main()
{
    child B;
    child C;
    child T;
    B.vechicle();
    C.vechicle();
    T.vechicle();
}