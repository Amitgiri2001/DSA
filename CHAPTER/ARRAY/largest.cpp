// largest_element an element in an array---

#include <iostream>
using namespace std;
void largest_element(int arr[], int n)
{
    int large=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    cout<<"Largest Element is: "<<large;
    
    
}
int main()
{
    int arr[8] = {3, 423, 5, 67, 855};
    largest_element(arr, 5);

    return 0;
}