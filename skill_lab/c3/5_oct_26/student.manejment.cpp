#include<iostream>
#include<string>
using namespace std;
class student
{
    private:
    string name;
    int roll number;
    int math;
    int scince;
    int computer;


    public:
           student(string n,int r,int m,int s,int c)
           {
            name = n;
             roll_no = r;
             math = m;
             scince = s;
             computer = c;

           }
};
int calculatetotal()
float calculatepercentage()
{
    return calculatepercentage()
}
void checkresult()
{
    if(math>= 33 && scince>= 33 && computer >= 33)
    {
        cout<<"pass"<<endl;
    }
    else{
        cout<<"fail";
    }
}

void display()
{
    cout<<"--------student marks management--------"<<endl;
    cout<<"Name :"<<name<<endl;
    cout<<"Roll no. :"<<roll_no<<endl;
    cout<<"Total Marks :"<<calculatetotal()<<endl;
    cout<<"percentage :"<<calculatepercentage()<<"%"<<endl;
}
int main()
{
    student obj("Aman Yadav",65,60,99,97);
    obj.display();
    obj.checkresult();
    return 0;
}