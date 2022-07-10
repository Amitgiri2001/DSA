
#include <iostream>
using namespace std;
void rowOrCol_sum(int arr[][2], int n)
{
    int max=0,index=0;
    for (int i = 0; i < n; i++)
    {
        int rSum = 0,cSum=0;
        for (int j = 0; j < n; j++)
        {
            rSum = rSum + arr[i][j];
            cSum = cSum + arr[j][i];
        }
        if(rSum>max && rSum>=cSum){
            max=rSum;
            index=i;
            
        }
        else if (cSum>max && cSum>rSum){
            max=cSum;
            index=i;
        }

    }
    cout<<max<<" "<<"index="<<index;
}

int main()
{
    int arr[][2] = {{1,1},{1,1}};
    rowOrCol_sum(arr, 2);

    return 0;
}
