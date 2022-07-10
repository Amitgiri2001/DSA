/*Distribute Candies
Send Feedback
Shaky has N (1<=N<=50000) candy boxes each of them contains a non-zero number of candies (between 1 and 1000000000). Shaky want to distibute these candies among his K (1<=K<=1000000000) IIIT-Delhi students. He want to distibute them in a way such that:
1. All students get equal number of candies.
2. All the candies which a student get must be from a single box only.
As he want to make all of them happy so he want to give as many candies as possible. Help Shaky in finding out what is the maximum number of candies which a student can get.
Input
First line contains 1<=T<=20 the number of test cases. Then T test cases follow. First line of each test case contains N and K. Next line contains N integers, ith of which is the number of candies in ith box.
Output
For each test case print the required answer in a seperate line.
Sample Input:
2
3 2
3 1 4
4 1
3 2 3 9
Sample Output:
3
9 */

/*
#include <iostream>
using namespace std;
int maximum(int arr[],int n){
    int max=0;
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int candy(int arr[],int n,int persons){
    // Find maximum element of this array
    int max=maximum(arr,4);

    // we can use Binary Search here
    // Here time complexity is O(max_element*n)
    for(int i=1;i<=max;i++){
        int count=0;
        for(int j=0;j<n;j++){
            count=count+arr[j]/i;

        }
        if(count<persons){
            return i-1;
            break;
        }

    }
    return 0;
}
int main()
{
    int arr[]={3,2,3,9};
    cout<< candy(arr,4,5);



    return 0;
} */
#include <iostream>
using namespace std;
int maximum(int arr[], int n)
{
    int max = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}
int candy(int arr[], int n, int persons)
{
    // Find maximum element of this array
    int max = maximum(arr, 4);

    // we can use Binary Search here
    // Here time complexity is O(log(max_element)*n)
    int start = 0;
    int end = max;
    int ans = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        int count = 0;
        for (int j = 0; j < n; j++)
        {
            count = count + arr[j] / mid;
        }
        if (count >= persons)
        {
            ans = mid;
            start = mid + 1;
        }
        if (count < persons)
        {
            end = mid - 1;
        }
    }
    return ans;
}

int main()
{
    int arr[] = {3, 2, 3, 9};
    cout << candy(arr, 4, 5);

    return 0;
}