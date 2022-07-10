
#include <iostream>
using namespace std;
int ans;
void lastOccur(int arr[], int x, int start, int n)
{
    // Base Case
    if (start > n)
    {
        return ;
    }
    if (arr[start] == x)
    {
        cout<<start<<" ";
    }
    // Recursive call
    lastOccur(arr, x, start + 1, n);
   
}
int main()
{
    int arr[5] = {2, 2, 3, 2, 2};
    lastOccur(arr, 2, 0, 4);
    return 0;
}