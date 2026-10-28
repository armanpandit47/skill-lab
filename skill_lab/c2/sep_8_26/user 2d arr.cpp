#include <iostream>
using namespace std;

int main()
{
    int i,j;

    cout<<"row: ";
    cin>>i;
    cout<<"column: ";
    cin>>j;

    int arr[i][j];
    for(int m=0;m<i;m++)
    {
        for(int n=0;n<j;n++)
        cin>>arr[i][j];
    }
    cout<<endl;
    cout<<endl<<endl;
   for(a=0;a<i; a++)
 {
    for(b=0;b<j; b++)
    {
        cout<<arr[a][b] <<"";
    }
    
 }cout<<endl;
 return 0;
}