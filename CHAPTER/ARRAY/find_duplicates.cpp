#include <iostream>
using namespace std;

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

    int result;
    for (int i = 0; i < n; i++)
    {
        result = result ^ arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        result = result ^ i;
    }

    cout << result;

    return 0;
}
