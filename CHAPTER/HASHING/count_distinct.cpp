//count all distinct element of an array brute force solution

#include <iostream>
using namespace std;
int main()
{
    int arr[]={3,8,6};
    int n=3;
    int res=0;
    for(int i=0;i<n;i++){
        int j;
        for(j=0;j<i;j++){
            if(arr[i]==arr[j]){
                break;
            }
            
        }
        if(j==i){
                res++;
            }
    }
    cout<<res;

    

    return 0;
}
