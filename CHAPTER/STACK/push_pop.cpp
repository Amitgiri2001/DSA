

#include <iostream>
#include<stack>
using namespace std;
void push(int arr[],int *top,int val){
    *top=*top+1;
    arr[*top]=val;
    cout<<arr[*top]<<endl;
}
void pop(int arr[],int *top){
    cout<<arr[*top]<<endl;
    *top=*top-1;
}
int main()
{
   int arr[12];
   int top=-1;
   push(arr,&top,10);
   push(arr,&top,20);
   push(arr,&top,30);
   push(arr,&top,40);


   pop(arr,&top);
   pop(arr,&top);
   pop(arr,&top);
  

    

    return 0;
}