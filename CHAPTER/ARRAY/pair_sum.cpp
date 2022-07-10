#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void pair_sum(int arr[], int n, int x)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                count++;
            }
        }
    }

    cout << "Total times present :" << count;
}
void pair_sum2(int arr[], int n, int x)
{
    int count = 0;
    unordered_map<int, int> um;

    for (int i = 0; i < n; i++)
    {
        um[arr[i]]++;
    }
    for (int i = 0; i < n; i++)
    {
        if (um.find(x - arr[i]) != um.end())
        {
            cout << arr[i] << " " << um[x - arr[i]] << endl;

            count += um[x - arr[i]];
            um[arr[i]]--;
        }
    }

    cout << "Total times present :" << count;
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
    int x;
    cout << "Enter the pair sum element: ";
    cin >> x;
    pair_sum(arr, n, x);
    cout << endl;
    pair_sum2(arr, n, x);

    return 0;
}
