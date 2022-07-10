// search an element in an array---

#include <iostream>
using namespace std;
void search(int arr[], int n, int pos,int val,int cap)
{
    if(n==cap){
        cout<<"Your array is full";
        return;
    }
    pos=pos-1; //because it is an index of an array
    for(int i=n-1;i>=pos;i--){
        
        arr[i+1]=arr[i];
    }
    arr[pos]=val;

    for(int i=0;i<cap;i++){
        cout<<arr[i]<<" ";
    }
    
    
}
int main()
{
    int arr[8] = {3, 4, 5, 67, 8};
    search(arr, 5, 1,52,8);

    return 0;
}