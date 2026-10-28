#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {
        {41, 56, 85},
        {25, 68, 78},
        {23, 63, 89}
    };

    // Original matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           if(i==0//i==2//j==0//j==2)
            {
                cout<< arr[i][j];
            }
            else()
                   {
                     cout<<"  ";
                   }
            
        }
        cout << endl;
    }
    return 0;
}