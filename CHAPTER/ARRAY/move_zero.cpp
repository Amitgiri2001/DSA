

#include <iostream>
using namespace std;
void move_zero(int arr[],int n){
    int start=0,end=n-1;
    while(start<=end){
        if(start==0 && end!=0){
            int temp=arr[start];
            arr[start]=arr[end];
            arr[end]=temp;
            start++;
            end--;
        }
        else if(start!=0 && end==0){
            start++;
            end--;

        }
        else {
            start++;
            end--;

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{


int n;
    cout << "Enter the array size";
    cin >> n;

    int arr[n];
    cout << "Enter all array Elements";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    move_zero( arr, n);
    

    return 0;
}