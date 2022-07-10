#include <iostream>
using namespace std;

void swap_alternatives(int arr[], int n)
{
    for (int i = 0; i < n; i = i + 2)
    {
        if (i + 1 == n)
        {
            break;
        }
        else
        {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
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
    cout << "Enter array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    swap_alternatives(arr, n);
    return 0;
}

