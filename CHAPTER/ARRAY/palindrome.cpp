

#include <iostream>
using namespace std;

void reverse(char arr, int n)
{
    for(int i=n;i>=0;i--){
    cout<<arr;
    }

    
}
int main()
{
    int n;
    cin >>n;
    char arr[n][12];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
    int size = sizeof(arr) / sizeof(*arr);
    cout<<size<<endl;
    
        reverse(*arr[i], size);
        cout<<endl;
    }

    return 0;
}