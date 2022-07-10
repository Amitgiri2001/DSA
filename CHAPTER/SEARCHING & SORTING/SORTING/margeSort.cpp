/*
marge sort is first divide and then marge..
Approach:
1.first of all we divide our array two parts using mid .
2.then we also divide again and again when(too small).
3.we divide that using recursion
4.then marge all of them using two pointer technique.
*/

#include <iostream>
using namespace std;
void marge(int arr[], int mid, int l, int r)
{
    int n1 = mid - l + 1;
    int n2 = r - mid;

    int a[n1];
    int b[n2]; // temparary array

    // putting value in this array
    for (int i = 0; i < n1; i++)
    {
        // important to remember**************
        a[i] = arr[l + i];
    }
    for (int i = 0; i < n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    // marge this to temparary array into arr[]
    int i = 0, j = 0, k = l; // important to remember**************
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
    
}
void margeSort(int arr[], int l, int r)
{
    int mid = (l + r) / 2;
    if (l < r)
    {
        margeSort(arr, l, mid);
        margeSort(arr, mid + 1, r);
    }
    marge(arr, mid, l, r);
}
int main()
{
    int arr[] = {22, 3, 7, 2, 9, 6};
    margeSort(arr, 0, 5);
    cout<<endl;
    // print the sorted array
    for (int i = 0; i <= 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}