// first we reverse the number then see if the actual number is same of the reverse number or not ...if same then it is a palindrome number else it is not a palindrom number...

#include <iostream>
using namespace std;

void palindrom(int n)
{
    int num = n;
    int reverse = 0;

    while (n != 0)
    {
        int last_digit = n % 10;
        reverse = reverse * 10 + last_digit;
        n /= 10;
    }
    // we use num variable rather than n because n is changed at last...
    if (reverse == num)
    {
        cout << "It is a pallindrom number";
    }
    else
    {
        cout << "It is not a pallindrom number";
    }
}

int main()
{
    int n;
    cout << "Please Enter a number for check : ";
    cin >> n;
    palindrom(n);

    return 0;
}