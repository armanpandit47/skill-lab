#include<iostream>
using namespace std;
class student
{
    public:
    void add(int a)
    {
        cout<<"value of a is"<<a<<endl;
    };
    void add(int a,int b)
    {
        cout<<"value of a & b is"<<a+b<<endl;
    };
    void add(int a,int b,int c)
    {
        cout<<"value of a & b & c is"<<a+b+c<<endl;
    };
};
int main()
{
    student obj;
    obj.add(10);
    obj.add(47,11);
    obj.add(56,85,12);
};
