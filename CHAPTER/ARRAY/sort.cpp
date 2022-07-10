#include <bits/stdc++.h>
using namespace std;

int main()
{
     
    int n;
    cout << "Enter the total array elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
// arr+n means upto this index not this index beacause it is not the array element
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
  

    return 0;
}
