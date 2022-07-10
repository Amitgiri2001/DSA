
// C++ program for insertion sort
#include <bits/stdc++.h>
using namespace std;
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        /* Move elements of arr[0..i-1], that are
        greater than key, to one position ahead
        of their current position */
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
// A utility function to print an array of size n
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
/* Driver code */
int main()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100 + 1;
    }
    clock_t start, end;
    start = clock();

    insertionSort(arr, n);
    end = clock();
    // printArray(arr, n);
    double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
    cout << "Total time taken by this algorithm is: " << fixed << time_taken << setprecision(5) << " Sec." << endl;
    return 0;
}