#include<iostream>
using namespace std;
void add(int a,int b)
{
    int c = a+b;
    cout<<c;
}
void sub(int a,int b)
{
    int c = a-b;
    cout<<c;
}
void mult(int a,int b)
{
    int c = a*b;
    cout<<c;
}
void div(int a,int b)
{
    int c = a/b;
    cout<<c;
}
int main()
{
    add(47,4);
    return 0;
}