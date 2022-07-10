
#include <iostream>
using namespace std;
void wave(int arr[][4], int n)
{
    
    for (int j = 0; j < n; j++)
    {
        if (j % 2 == 0)
        {
            for (int k = 0; k < n; k++)
            {
                cout << arr[k][j]<<" ";
            }
        }
        else
        {
            for (int p = n - 1; p >= 0; p--)
            {
                cout << arr[p][j] <<" ";
            }
        }
    }
   
}

int main()
{
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
    wave(arr, 4);

    return 0;
}