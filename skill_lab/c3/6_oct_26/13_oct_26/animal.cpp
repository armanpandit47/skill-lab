#include<iostream>
using namespace std;
class Animal
{
    public:
    virtual void sound()
    {
        cout<<"Animal make a sound"<<endl;
    }
};
class Dog: public Animal
{
    public:
     virtual void sound() override
    {
        cout<<"Dog bark"<<endl;
    }

};

class cat: public Animal
{
    public:
     virtual void sound() override
    {
        cout<<"cat meow"<<endl;
    }
};

int main()
{
    Animal *ace;
    Animal a;
    Dog d;
    cat c;
    ace= &d;
    ace -> sound();
    ace= &c;
    ace -> sound();
};


