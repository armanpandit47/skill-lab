#include<iostream>
using namespace std;

class student
{
public:
    ~student(){
        cout<<"this is constructor";
    }
};

int main()
{
    student o;
    return 0;
}
