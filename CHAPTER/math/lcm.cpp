// lcm means that lowest common multiplication factor of 2 number

#include <iostream>
using namespace std;
int lcm(int a, int b)
{
    int highest = max(a, b);
    int num = highest;
    int i = 1;
    while (true)
    {
        if (highest % a == 0 && highest % b == 0)
        {
            return highest;
            break;
        }
        else
        {
            highest = highest + num;
        }
    }
}
int main()
{
    int a, b;
    cout << "enter two number: \n";
    cin >> a >> b;

    cout << lcm(a, b);

    return 0;
}