// Basic concepts of binary search--
/* It is a searching algorithms which search in an sorted array.
And it takes lesser time complexity{ O(log n)} then leaner search{O(n) }..

Approach----
1.We want to find the mid element of an array...And define start=0;end=last of array;
2.then check the mid element of this array is same to the searching element or not.
    1.if(same){
        return index;
    }
    2.if(greater){
        end=mid-1;
    }
    3.if(lesser){
        start=mid+1;
    }

when we are doing this remember one thing that we do this while start<=end;


*/

#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n - 1;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 9, 22};
    int key = 29;
    cout << binarySearch(arr, 6, key);

    return 0;
}