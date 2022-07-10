// find the second largest element

#include <iostream>
#include <math.h>
using namespace std;
int large(int arr[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int sec_large(int arr[],int n){
    int largest=large(arr,n);
    int sec_max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != largest)
        {
            if(arr[i]>sec_max){
                sec_max=arr[i];
            }
            
        }
    }
    return sec_max;
    return -1;
}
int main()
{
    int n;
    cout << "Enter the array size";
    cin >> n;

    int arr[n];
    cout << "Enter all array Elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << sec_large(arr, n);

    return 0;
}