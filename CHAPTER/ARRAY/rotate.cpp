#include <iostream>
using namespace std;

void rotate(int N, int D)
{
    int arr[N];
    cout<<"Enter the array total elements : ";
    cin>>N;
    cout<<"Enter all array elements: ";
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    cout<<"Enter how many times you want to rotate: ";
    cin >> D;

    for (int j = D; j < N; j++)
    {
        cout << arr[j] << " ";
    }
    for (int k = 0; k < D; k++)
    {
        cout << arr[k] << " ";
    }
}

int main()
{

    int T;
    cout<<"Enter the test case numbert: ";
    cin >> T;
    int N, D;
    // int arr[N];
    // N = 5;
    // int arr[N] = {1, 2, 3, 4, 5};

    for (int i = 0; i < T; i++)
    {
        rotate(N,D);
        cout<<endl;
    }

    // code
    return 0;
}