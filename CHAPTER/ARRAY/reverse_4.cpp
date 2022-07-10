

#include <iostream>
using namespace std;

void reverse(int arr, int n)
{
    int num = arr;
    int last_digit;
    int rev = 0;
    while (num != 0)
    {
        last_digit = num % 10;
        rev = rev * 10 + last_digit;
        num=num/10;
    }
    cout << rev << endl;
}
int main()
{
    int n;
    cin >>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++)
    {
        reverse(arr[i], size);
    }

    return 0;
}