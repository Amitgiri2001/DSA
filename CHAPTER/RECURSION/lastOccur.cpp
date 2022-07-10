
#include <iostream>
using namespace std;
int ans;
int lastOccur(int arr[], int x, int start, int n)
{
    // Base Case
    if (start > n)
    {
        return -1;
    }
    if (arr[start] == x)
    {
        ans = start;
    }
    // Recursive call
    lastOccur(arr, x, start + 1, n);
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 3, 2, 4};
    cout << lastOccur(arr, 2, 0, 4);
    return 0;
}