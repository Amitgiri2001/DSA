// Check if an array is sorted or not

#include <iostream>
using namespace std;
bool isSorted(int arr[],int n){
    // if there are only one  element we sure that it is in sorted order
    // Base Case
    if(n<=1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    // recursive call
    // Create a new array and then recursively call it
    int ans[n-1];
    for(int i=1;i<n;i++){
        ans[i-1]=arr[i];
    }
    return isSorted(ans,n-1);

}
bool isSorted_2(int arr[],int n){
    // if there are only one  element we sure that it is in sorted order
    // Base Case
    if(n<=1){
        return true;
    }
    if(arr[0]>arr[1]){
        return false;
    }
    // Recursive call
    return isSorted(arr+1,n-1);

}
int main()
{
    int arr[]={2,11,15,19,42};
    cout<<isSorted(arr,5)<<endl;
    cout<<isSorted_2(arr,5);
  

    

    return 0;
}