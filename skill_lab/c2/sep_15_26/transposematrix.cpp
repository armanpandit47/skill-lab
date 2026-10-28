#include <iostream>
using namespace std;

int main()
{
    int arr[2][3] = {
        {41, 56, 85},
        {25, 68, 78}
    };

    // Original matrix
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Transpose matrix
    cout << "Transpose matrix" << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

    return 0;
}
