// we know that factorial of a number is the products of all number thats are lesser than that number and itself.

#include <iostream>
using namespace std;

int factorial(int n)
{

    int fact = 1;

    while (n != 0)
    {
        fact = fact * n;
        n--;
    }

    return fact;
}

int main()
{
    int n;
    cout << "Please Enter a number : ";
    cin >> n;
    cout << factorial(n);

    return 0;
}