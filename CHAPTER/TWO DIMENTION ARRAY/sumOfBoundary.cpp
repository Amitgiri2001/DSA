
#include <iostream>
using namespace std;
int sum(int arr[][4],int n){
   
    int sum=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0||j==n-1||i==n-1||j==0||i==j||j==n-1-i){
                sum=sum+arr[i][j];
            }

        }
    }
    return sum;
    
}
int main()
{
    int arr[4][4] = { {1, 2, 3,4},
                      {5, 6,7,8},
                      {9,10,11,12},
                      {13,14,15,16} };
    cout<<sum(arr,4);

    return 0;
}
