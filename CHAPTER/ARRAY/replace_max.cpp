#include<iostream>
using namespace std;

void swap(int *res,int &arr){
    int temp=*res;
    *res=*&arr;
    *&arr=temp;
}
/*
// O(n^2) solution-------------
void nextGreatest(int arr[], int n) {
	    // code here
        for(int i=0;i<n-1;i++){

            int res=arr[i+1];

            for(int j=i+1;j<n;j++){
                if(arr[j]>res){
                        res=arr[j];
                }
            }
            swap(&res,arr[i]);
        }

        for(int i=0;i<n-1;i++){
            cout<<arr[i]<<" ";
        }
        cout<<-1;

	}
    */
   void nextGreatest(int arr[], int n) {
	    int maxi = arr[n-1];
	    arr[n-1] = -1;
	    for(int i = n-2; i >= 0; i--)
	    {
	        int curr = arr[i];
	        arr[i] = maxi;
	        maxi = max(maxi,curr);
	    }
	}

int main(){
    int n;
    cout<<"Enter the total array elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   nextGreatest(arr, n);
	    
	
    return 0;
}