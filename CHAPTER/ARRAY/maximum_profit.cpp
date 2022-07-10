#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int maximum_profit(int arr[], int n)
{
    // approach is to sort this array first and then keep track  a max variable:
    sort(arr, arr + n);
    int maxi = 0;
    int profit = 0;
    for (int i = 0; i < n; i++)
    {
        profit = arr[i] * (n - i);
        if (profit > maxi)
        {
            maxi = profit;
        }
    }
    return maxi;
}
int main()
{
    // int arr[] = {34, 78, 90, 15, 67};
    int arr[] = {30, 20, 53, 14};
    cout << "Maximum Profit is: " << maximum_profit(arr, 4);

    return 0;
}