// sum of all number which is smaller then that number..


// Brute force approach
/*
#include <iostream>
using namespace std;
int sumOfAll(int arr[],int n){
    int sum=0;
    // Time complexity O(n^2)
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                sum=sum+arr[j];
            }
        }
    }
    return sum;
}
int main()
{
    int arr[] = {1,5,3,6,4,7 };
    cout<<sumOfAll(arr,6);

    return 0;
}*/
// Better Approach using Marge Sort
#include <iostream>
using namespace std;
int sumOfAll(int arr[],int n){
    int sum=0;
    // Time complexity O(n^2)
    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[j]<arr[i]){
                sum=sum+arr[j];
            }
        }
    }
    return sum;
}
int main()
{
    int arr[] = {1,5,3,6,4,7 };
    cout<<sumOfAll(arr,6);

    return 0;
}