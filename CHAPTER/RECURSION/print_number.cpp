

#include <iostream>
using namespace std;
void print_number(int n)
{
    // Base case
    if (n == 1)
    {
        cout << n << " ";
        return;
    }
    // recursive call
    print_number(n - 1);

    // calculation
    cout << n << " ";
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    print_number(n);

    return 0;
}