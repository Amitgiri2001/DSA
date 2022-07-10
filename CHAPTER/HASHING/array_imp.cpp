//try to solve that insert search delete in O(1) time..

#include <iostream>
using namespace std;
void insert(int position,int arr[]){
    arr[position]=1;

}
void deletes(int position,int arr[]){
    arr[position]=0;

}
bool search(int position,int arr[]){
    if(arr[position]==1){
        return true;
    }
    else{
        return false;
    }

}
int main()
{
    int arr[1000]={0}; //all the value of this array assign to 0.
    insert(10,arr);
    insert(20,arr);
    insert(119,arr);
    cout<< "the value is "<<search(10,arr)<<endl;
    cout<< "the value is "<<search(20,arr)<<endl;
    deletes(119,arr);
    cout<< "the value is "<<search(119,arr)<<endl;


    

    return 0;
}