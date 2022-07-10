// C++ program for reversal algorithm
// of array rotation
#include <bits/stdc++.h>
using namespace std;

/*Function to reverse arr[] from index start to end*/
void reverseArray(int arr[], int start, int end)
{
	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}

/* Function to left rotate arr[] of size n by d */
void leftRotate(int arr[], int d, int n)
{
	if (d == 0)
		return;
	// in case the rotating factor is
	// greater than array length
	d = d % n;

	reverseArray(arr, 0, d - 1);
	reverseArray(arr, d, n - 1);
	reverseArray(arr, 0, n - 1);
}

// Function to print an array
void printArray(int arr[], int size)
{
	for (int i = 0; i < size; i++)
		cout << arr[i] << " ";
}

/* Driver program to test above functions */
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
    int d;
    cout<<"Enter array rotation times: ";
    cin>>d;

	// Function calling
	leftRotate(arr, d, n);
	printArray(arr, n);

	return 0;
}