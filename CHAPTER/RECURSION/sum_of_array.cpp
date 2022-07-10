#include <iostream>
using namespace std;

int sum_of_array(int arr[],int i,int n)
{
    // base case
    if (n<i)
    {
        return 0;
    }
    // calculation
    int ans=arr[n]+sum_of_array(arr,i,n-1);

    // recursive call
    return  ans;
}
int main()
{
    // int num;
    // cout << "Enter the size of a array: ";
    // cin >> num;
    int arr[5]={2,6,5,30,20};
    cout << sum_of_array(arr,0,4) << endl;

    return 0;
}
