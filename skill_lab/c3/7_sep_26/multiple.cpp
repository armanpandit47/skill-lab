#include<iostream>
using namespace std;
class A
{
    public:
    void show1()
    {
        cout<<"Show -A"<<endl;
    }
};
class B
{
  public:
  void show2()
    {
        cout<<"Show -B"<<endl;
    }
};
class C: public A , public B
{
 public:
 void show3()
    {
        cout<<"Show -C"<<endl;
    }
};
int main()
{
    C obj;
    obj.show1();
    obj.show2();
    obj.show3();

    return 0;
}