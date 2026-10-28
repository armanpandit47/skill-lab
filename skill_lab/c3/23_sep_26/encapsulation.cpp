#include<iostream>
using namespace std;
class student{
    public:
    int marks;
    string name;
    int rollno;

};
 int main()
{
    student obj;
    obj.marks=92;
    obj.name="Aman";
    obj.rollno=73;
    cout<<obj.name<<endl;
    cout<<obj.marks<<endl;
    cout<<obj.rollno;
    return 0;
}