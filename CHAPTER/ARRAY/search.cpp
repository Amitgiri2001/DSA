// search an element in an array---

#include <iostream>
using namespace std;
void search(int arr[], int n, int k)
{
    bool flag=true;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            cout << "its present";
            flag=false;
            break;
        }
    }
    if (flag==true)
    {
        cout << "its not present in this array";
    }
}
int main()
{
    int arr[] = {3, 4, 5, 67, 8};
    search(arr, 5, 6);

    return 0;
}