

#include <iostream>
using namespace std;
int multiply(int m, int n)
{
    // Base case
    if (n == 0)
    {
        return 0;
    }
    // recursive call
    int ans = m + multiply(m, n - 1);
    return ans;
}
int main()
{
    int m, n;
    cout << "Enter Two number: ";
    cin >> m >> n;
    int ans = multiply(m, n);
    cout << "The answer is:" << ans;

    return 0;
}