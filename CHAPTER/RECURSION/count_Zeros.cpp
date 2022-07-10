

#include <iostream>
using namespace std;
int count = 0;
int count_zeros(int n)
{
    // base case
    if (n == 0)
    {
        return count;
    }
    // recursive call
    int last_digit = n % 10;
    if (last_digit == 0)
    {
        count++;
    }
    count_zeros(n / 10);
    // return count;
}
int main()
{
    int n;
    cout << "Enter the number:";
    cin >> n;
    int ans = count_zeros(n);
    cout << "The total number of Zeros is:" << ans;

    return 0;
}