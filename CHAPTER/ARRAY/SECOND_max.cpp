

#include <iostream>
using namespace std;

int second_max(int arr[], int n)
{
    int maxx = INT_MIN, sec_max = INT_MIN;
    if(n<2){
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxx)
        {
            sec_max = maxx;
            maxx = arr[i];
        }
        if (arr[i] > sec_max && arr[i] < maxx)
        {
            sec_max = arr[i];
        }
    }
    return sec_max;
}
int main()
{
    int n;
    cout << "Enter array size: ";
    cin >> n;

    int arr[n];
    cout << "Enter array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << second_max(arr, n) << endl;

    return 0;
}