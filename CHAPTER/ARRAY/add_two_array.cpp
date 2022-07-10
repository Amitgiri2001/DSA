#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void sum(int arr[], int arr2[], int n, int m)
{

    int i = n - 1, j = m - 1;
    int k = max(n, m);
    int size = k;

    cout << k << endl;
    int temp[k];

    int carry = 0;
    while (i >= 0 && j >= 0)
    {
        int sum = arr[i] + arr2[j] + carry;
        temp[k] = sum % 10;
        carry = sum / 10;
        i--;
        j--;
        k--;
    }
    while (i >= 0)
    {
        int sum = arr[i] + carry;
        temp[k] = sum % 10;
        carry = sum / 10;
        i--;
        k--;
    }
    while (j >= 0)
    {
        int sum = arr[j] + carry;
        temp[k] = sum % 10;
        carry = sum / 10;
        j--;
        k--;
    }

    temp[0] = carry;
    for (int i = 0; i <= size; i++)
    {

        cout << temp[i] << " ";
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
    int m;
    cout << "Enter array 2 size: ";
    cin >> m;

    int arr2[m];
    cout << "Enter array 2 Elements: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    sum(arr, arr2, n, m);

    return 0;
}