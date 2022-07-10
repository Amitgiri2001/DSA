#include <iostream>
using namespace std;

int count_digit(int n)
{
    // base case
    if (n == 0)
    {
        return n;
    }
    // calculation
    int ans=count_digit(n/10);

    // recursive call
    return 1 + ans;
}
int main()
{
    int num;
    cout << "ENter a number for count digit: ";
    cin >> num;
    cout << count_digit(num) << endl;

    return 0;
}
