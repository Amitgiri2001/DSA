/* This is the basic sorting algorithm that anyone want to learn
this is Selection sort---
the basic fandda is check the min_index
element of this selected array and swap with its first element;
*/

#include <iostream>
using namespace std;
void selection(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int min_index = i;
        for (int j = i+1; j < n; j++)
        {
            // find the min element in selected array
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // swapping
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {4, 6, 8, 2, 1, 3};
    selection(arr, 6);

    return 0;
}