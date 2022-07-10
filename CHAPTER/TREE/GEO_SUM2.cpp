
#include <iostream>
#include <math.h>
using namespace std;
// float sum=0.0;
float geometric_sum(int n)
{
    // Base case
    if (n == 0)
    {
        return 1;
    }
    // calculation
    float sum = (1 / pow(2, n));
    // recursive call
    return sum + geometric_sum(n - 1);
}
int main()
{
    int num;
    cout << "Enter the power number: ";
    cin >> num;
    cout << geometric_sum(num);

    return 0;
}