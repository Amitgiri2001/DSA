/*Spiral Print

Sample Input 1:
1
4 4 
1 2 3 4 
5 6 7 8 
9 10 11 12 
13 14 15 16
Sample Output 1:
1 2 3 4 8 12 16 15 14 13 9 5 6 7 11 10 
 */


#include <iostream>
using namespace std;
void spiral (int arr[][4],int n){
    int rStart=0,rEnd=n-1;
    int cStart=0,cEnd=n-1;
    for(int i=0;i<n;i++){

        for(int j=cStart;j<=cEnd;j++){
            cout<<arr[rStart][j]<<" ";          
        }
        rStart++;
        for(int k=rStart;k<=rEnd;k++){
            cout<<arr[k][cEnd]<<" ";          
        }
        cEnd--;
        for(int p=cEnd;p>=cStart;p--){
            cout<<arr[rEnd][p]<<" ";
        }
        rEnd--;
        for(int q=rEnd;q>=rStart;q--){
            cout<<arr[q][cStart]<<" ";
        }
        cStart++;

    }
}
int main()
{
    
    int arr[4][4] = {{1, 2, 3, 4},
                     {5, 6, 7, 8},
                     {9, 10, 11, 12},
                     {13, 14, 15, 16}};
   spiral(arr, 4);

    

    return 0;
}