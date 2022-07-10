// Here we want to find the intersection of two array.
#include <iostream>
#include <bits/stdc++.h>

using namespace std;
// time complexity=O(n*m);
void Approach1(int arr1[], int arr2[], int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                arr2[j] = INT_MIN;
                break;
            }
        }
    }
}
// Start Approach 2  Time complexity O(nlog(m))

int binarySearch(int arr1[], int s, int e, int x)
{

    if (e >= s)
    {
        int mid = s + (e - s) / 2;

        if (arr1[mid] == x)
        {
            return x;
        }
        else if (arr1[mid] > x)
        {
            return binarySearch(arr1, s, mid - 1, x);
        }
        else
        {
            return binarySearch(arr1, mid + 1, e, x);
        }
    }
    return -1;
}
// It is very good approach but it falls in one case when same element are there in one array
void Approach2(int arr1[], int arr2[], int n, int m)
{

    for (int i = 0; i < n; i++)
    {
        if (binarySearch(arr2, 0, m - 1, arr1[i]) != -1)
        {
            cout << arr1[i] << " ";
        }
    }
}

// Approach 3------------
void Approach3(int arr1[], int arr2[], int n, int m)
{
    int p1 = 0, p2 = 0;
    while (p1 < n && p2 < m)
    {
        if (arr1[p1] == arr2[p2])
        {
            cout << arr1[p1] << " ";
            p1++;
            p2++;
        }
        else if (arr1[p1] < arr2[p2])
        {
            p1++;
        }
        else
        {
            p2++;
        }
    }
}

// Approach 4-------------- time complexity =O(m) || O(n)
void Approach4(int arr1[], int arr2[], int n, int m)
{
    // create an unordered map
    unordered_map<int, int> umap;
    // insert all element into this map
    for (int i = 0; i < n; i++)
    {
        umap[arr1[i]]++;
    }

    // check all element in 2 nd array
    for (int i = 0; i < m; i++)
    {
        // if 2nd array element present in map
        if ( umap[arr2[i]] != 0)
        {

            cout << arr2[i] << " " << endl;
            // decrement the count of this element in map
            umap[arr2[i]]--;
            // cout << "the count of " << arr2[i] << " th element is : " << umap[arr2[i]] << endl;
            // if in some point the map count is equal to 0 then delete this number from map
            if (umap.count(arr2[i]) == 0)
            {
                umap.erase(arr2[i]);
            }

            // print the whole updated map---
            // unordered_map<int, int>::iterator itr;
            // cout << "print map: \n";
            // for (auto x : umap)
            // {
            //     cout << x.first << " " << x.second << endl;
            // }
        }
    }
}

int main()
{
    int arr1[] = {2, 3, 2, 7, 8, 7, 6};
    int arr2[] = {3, 7, 2, 7, 2, 11, 7, 2, 2};
    int n = 7, m = 9;
    /*
    // for Approach 2- & 3------------
        int a = (sizeof(arr2) / sizeof(arr2[0]));
        // sort(first index,last+1 index)-->upto not including
        sort(arr2, arr2 + a);
     // for only Approach 3-----------
        int b = (sizeof(arr1) / sizeof(arr1[0]));
        // sort(first index,last+1 index)-->upto not including
        sort(arr1, arr1 + b);


        */
    Approach4(arr1, arr2, n, m);

    return 0;
}