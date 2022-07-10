

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void marge_two_array(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;
    vector<int> arr;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            arr.push_back(arr1[i]);
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            arr.push_back(arr2[j]);
            j++;
        }
        else
        {
            arr.push_back(arr2[j]);
            i++;
            j++;
        }
    }

    while (i < n)
    {
        arr.push_back(arr1[i]);
        i++;
    }
    while (j < m)
    {
        arr.push_back(arr2[j]);
        j++;
    }
    // cout<<arr.size()<<endl;
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr1[5] = {1, 5, 7, 9, 23};
    int arr2[3] = {4, 6, 12};
    marge_two_array(arr1, arr2, 5, 3);

    return 0;
}