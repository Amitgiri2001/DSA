
#include<bits/stdc++.h>
using namespace std;




class Solution{
  public:
    int minDist(int arr[], int n, int x, int y) {
        int low=-1,high=-1;
        for(int i=0;i<n;i++){
            //find x--
            if(arr[i]==x){
                low=i;
                break;
            }
        }
        for(int i=0;i<n;i++){
            //find x--
            if(arr[i]==y){
              high=i;
              break;
            }
        }
      if (high==-1 || low==-1){
          return -1;
      }
      else if(high-low<0){
          return -(high-low);
      }
      else{
          return (high-low);
      }
        // code here
    }
};
