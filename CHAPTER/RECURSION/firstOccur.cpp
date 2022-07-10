// Print the first occurrence of a number

#include <iostream>
using namespace std;
int firstOccur(int arr[], int x, int index, int n)
{
    // Base Case
    if (arr[index] == x)
    {
        return index;
    }
    if (index >= n)
    {
        return -1;
    }
    // recursive call
    return firstOccur(arr, x, index + 1, 5);
}

int main()
{
    int arr[] = {2, 11, 11, 11, 15};
    cout << firstOccur(arr, 11, 0, 5) << endl;
    return 0;
}