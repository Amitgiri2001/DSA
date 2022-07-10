

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
void marge(int a[], int si, int ei)
{
    int size = (ei - si) + 1;
    int mid = (ei + si) / 2;
    int *v=new int[size];
    int i = si;
    int j = mid + 1;
    int k=0;
    while (i <= mid && j <= ei)
    {
        if (a[i] < a[j])
        {
            v[k]=a[i];
            i++;
            k++;
        }
        else if (a[j] < a[i])
        {
            v[k]=a[j];
            j++;
            k++;
        }
        else
        {
             v[k]=a[i];
            i++;
            k++;
        }
    }
    while (i <= mid)
    {
         v[k]=a[i];
            i++;
            k++;
    }
    while (j <= ei)
    {
         v[k]=a[i];
            j++;
            k++;
    }
    int m=0;
    for(int i=si;i<=ei;i++){
        a[i]=v[m];
        m++;
    }
}
void marge_sort(int a[], int si, int ei)
{
    // Base case
    if (si >= ei)
    {
        return;
    }
    int mid = (si + ei) / 2;
    // recursive call
    marge_sort(a, si, mid);
    marge_sort(a, mid + 1, ei);

    // Calculation
    marge(a, si, ei);
}
int main()
{
    int arr[] = {2, 55, 3, 7, 8, 1};
    marge_sort(arr, 0, 5);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}