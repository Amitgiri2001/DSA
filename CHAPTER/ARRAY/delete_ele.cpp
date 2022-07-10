// delete an element from an array


#include <iostream>
using namespace std;
int sum(int arr[],int n,int x){
    int i;
    for(int i=0;i<n;i++)
{
    if(arr[i]==x){
        break;
    }
}    
    if(i==n){
        return n;
    }
    for(int j=i;j<n-1;j++){
        arr[j]=arr[j+1];
    }
    for(int i=0;i<n-1;i++){
        cout<<arr[i]<<" ";
    }
    return (n-1);


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
    int x;
    cout<<"Enter The targeted element";
cin>>x;
int y=sum(arr,n,x);           
cout<<y;
    

    return 0;
}