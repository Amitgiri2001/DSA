// { Driver Code Starts


#include<bits/stdc++.h>

using namespace std;


 // } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    // code here
	    int low=0, high=n;
	   // first of all i want to create some variable for track of the lowing
	   //occurrence of the target number as well as the high occurrence
	   
	    int  low_poient=-1;
	     int  high_poient=-1;
	      while(low<high){
	           
	          int mid=(low+high) /2;
	          if(arr[mid]==x){
	              low_poient=mid;
	           //   let see for anoter time because we want to check that if 
	           //the are any ocoorance of this number in low or not
	              high--;
	          }
	          else if(arr[mid]<x){
	              low++;
	          }
	          else if(arr[mid]>x){
	              high--;
	          }
	          
	      }
	      int l=0, h=n;
	      while(l<h){
	         
	         int  m=(l+h) /2;
	          if(arr[m]==x){
	              high_poient=m;
	               //   let see for anoter time because we want to check that if 
	           //the are any ocoorance of this number in high or not
	              l++;
	          }
	          else if(arr[m]<x){
	              l++;
	          }
	          else if(arr[m]>x){
	              h--;
	          }
	          
	      }
	   //   if there are no occ0ration of the number 
	      if( high_poient==-1 ||  low_poient==-1){
	          return 0;
	      }
	   //   calcvulate it
	      return ((high_poient-low_poient)+1);
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends