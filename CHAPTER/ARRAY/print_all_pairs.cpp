// here we need to print all pairs with given sum k
// int arr[]={ 2,-1,3,5,6,0,-1,2,6};

     // basic Approach is if we have a number :-> it can pair with the number which is K greater or k smaller than that.
     // let's take one example 2 can pair with 2+k -> 2+3=5 or 2 can also pair with 2-k -> 2-3=-1


/* ans: 2 -1
        2 -1
        2 -1
        2 -1
        2  5
        3  6
        3  6
        3  0
*/
#include <iostream>
#include<unordered_map>
using namespace std;

// brute force Approach: create 2 for loops and print the all pair
// time complexity=O(n^2)
void print_all_pairs(int arr[],int k,int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j]==arr[i]+k || arr[j]==arr[i]-k ){
                cout<<arr[i]<< " "<<arr[j]<<endl;
            }
        }
    }
}
// using hashmap it takes O(n) time
void print_all_pairs2(int arr[],int k,int n){
    unordered_map<int,int> um;
    for(int i=0;i<n;i++){
        um[arr[i]]++;
    }
    for(int i=0;i<n;i++){
        if(um[arr[i]+k]!=0){
            cout<<arr[i]<<" "<<arr[i]+k<<" "<<um[arr[i]+k]<<" times\n";
            
        }
        if(um[arr[i]-k]!=0){
            cout<<arr[i]<<" "<<arr[i]-k<<" "<<um[arr[i]-k]<<" times\n";
            
        }
        um[arr[i]]--;

    }
}

int main()
{
    int arr[]={ 2,-1,3,5,6,0,-1,2,6};
    int k=3;
    print_all_pairs2(arr,k,9);

    

    return 0;
}