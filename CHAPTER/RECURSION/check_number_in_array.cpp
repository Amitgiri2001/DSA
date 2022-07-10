#include <iostream>
using namespace std;
int start=0;
int check_number(int arr[],int i,int n)
{
    // base case
    if (n<0)
    {
        return 0;
    }
    // calculation
    if(arr[n]==i){
        return true;
    }
    // recursive call
    return  check_number(arr,i,n-1);
}
int main()
{
    int arr[5]={2,6,5,30,20};
    cout << check_number(arr,35,4) << endl;

    return 0;
}
