/*
Quick Sort---This is basically Sort using Pivot Element.
Approach--
1.First we needs to defined one element as a pivot element
2.then we want to sort the array as the all the lower value of pivot element is goes backword to the pivot element and greater element is goes forwords.

3.then we want to do this recursively.
 */

#include <iostream>
using namespace std;
void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}
int partition(int arr[], int l, int r)
{
    int i = l - 1;
    // we assume that last element is the pivot element.
    int pi = arr[r];
    for (int j = l; j < r; j++)
    {
        // if array element if lesser then pivot then swap it with arr[j]
        if (arr[j] < pi)
        {
            i++;
            swap(arr, i, j);
        }
    }
    // swap the pivot element.. 
    swap(arr, i + 1, r);
    return i + 1;
}
void quickSort(int arr[], int l, int r)
{
    if (l < r)
    {
        int pi = partition(arr, l, r);
        // because we already know that pivot element is already in right position
        quickSort(arr, l, pi - 1);
        quickSort(arr, pi + 1, r);
    }
}
int main()
{
    int arr[] = {4, 2, 56, 7, 3};
    quickSort(arr, 0, 4);
    // print this array
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}