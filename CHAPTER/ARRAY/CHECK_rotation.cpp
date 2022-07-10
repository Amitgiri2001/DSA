

#include <iostream>
using namespace std;
int check_rotation(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            return i + 1;
        }
    }
    return 0;
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

    cout << check_rotation(arr, n);

    return 0;
}