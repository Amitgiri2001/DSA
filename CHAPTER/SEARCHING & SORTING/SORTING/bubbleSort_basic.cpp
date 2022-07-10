/*
Bubble sort means repeatedly swap two adjacent elements if they are in wrong order.

Approach--
1.check first two number.
   1.if(they are in same order then move on);
   2.else{
       swap them and move on;
   }
*/

#include <iostream>
using namespace std;
void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        bool flag=true;
        for (int j = 0; j < n - i; j++)
        {

            if (arr[j] > arr[j + 1])
            {
                flag=false;
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        if(flag==true){
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{

    int arr[6] = {12, 5, 8, 2, 67, 3};
    bubbleSort(arr, 6);

    return 0;
}