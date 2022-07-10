

#include <iostream>
using namespace std;
void sort_012(int arr[], int n)
{
    int nz = 0, nt = n - 1, curr = 0;
    int i = 0;
    // nz=no of zeros means 0 s position
    // nt= 2 s position
    while (i <= nt)
    {
        if (arr[i] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[nz];
            arr[nz] = temp;
            i++;
            nz++;
        }
        else if (arr[i] == 2)
        {
            int temp = arr[i];
            arr[i] = arr[nt];
            arr[nt] = temp;
            nt--;
        }
        else
        {
            i++;
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
    sort_012(arr, n);

    return 0;
}