#include <iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
        {14, 25, 56},
        {47, 25, 65},
        {23, 68, 41}
    };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
