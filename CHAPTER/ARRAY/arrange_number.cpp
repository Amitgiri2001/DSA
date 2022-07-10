

#include <iostream>
using namespace std;

void arrange_number(int arr[], int n)
{
    int i = 0, j = n - 1;
    int k = 1;
    while (i < j)
    {
        arr[i] = k;
        k++;
        i++;

        arr[j] = k;
        k++;
        j--;
    }
    if (i == j)
    {
        arr[i] = k;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];

    arrange_number(arr, n);

    return 0;
}