// A simple C++ program to find three elements
// whose sum is equal to zero
#include<bits/stdc++.h>
using namespace std;
 


// Prints all triplets in arr[] with 0 sum
void findTriplets(int arr[], int n)
{
    bool found = false;
    for (int i=0; i<n-2; i++)
    {
        for (int j=i+1; j<n-1; j++)
        {
            for (int k=j+1; k<n; k++)
            {
                if (arr[i]+arr[j]+arr[k] == 0)
                {
                    cout << arr[i] << " "
                         << arr[j] << " "
                         << arr[k] <<endl;
                    found = true;
                }
            }
        }
    }
 
    // If no triplet with 0 sum found in array
    if (found == false)
        cout << " not exist "<<endl;
 
}
// O(n^2 approach)
bool findTriplets2(int arr[], int n)
    { 
         bool result=false;
       sort(arr,arr+n);
       for(int i=0;i<n-1;i++){
           int x=arr[i];
           int l=i+1;
           int r=n-1;
           while(l<r){
               if(x+arr[l]+arr[r]==0){
                   result ==true;
                   return true;
               }
               else if(x+arr[l]+arr[r]<0){
                   l++;
               }
               else if(x+arr[l]+arr[r]>0){
                   r--;
               }
           }
           
       }
       if(result==false){
           return false;
       }
        //Your code here
    }
 
// Driver code
int main()
{
    int arr[] = {0, -1, 2, -3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    findTriplets(arr, n);
    findTriplets2(arr, n);
    return 0;
}