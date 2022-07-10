#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void intersection(int arr[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    sort(arr, arr + n);
    sort(arr2, arr2 + m);
    while (i < n && j < m)
    {
        if (arr[i] == arr2[j])
        {
            cout << arr[i] << " ";
            i++;
            j++;
        }
        else if (arr[i] > arr2[j])
        {
            j++;
        }
        else if (arr[i] < arr2[j])
        {
            i++;
        }
    }
}
void intersection2(int arr[], int arr2[], int n, int m)
{
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {
        um[arr[i]]++;
    }
    for (int i = 0; i < m; i++)
    {
        if (um.find(arr2[i]) != um.end())
        {
            cout << arr2[i] << " ";
            um[arr2[i]]--;
        }
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
    cout << "Enter array size: ";
    cin >> m;

    int arr2[m];
    cout << "Enter array Elements: ";
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }
    intersection(arr, arr2, n, m);
    cout << endl;
    intersection2(arr, arr2, n, m);

    return 0;
}
