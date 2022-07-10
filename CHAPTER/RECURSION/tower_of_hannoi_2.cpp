

#include <iostream>
using namespace std;
void tower_of_hanoi(int n, char source, char auxilary, char destination)
{
    //  base case
    if (n == 1)
    {
        cout << source << " To " << destination << endl;
        return;
    }
    //  Recursive call
    tower_of_hanoi(n - 1, source, destination, auxilary);
    //  calculation
    cout << source << " To " << destination << endl;

    // recursive call
    tower_of_hanoi(n - 1, auxilary, source, destination);
}
int main()
{
    int n;
    cout << "Enter no of disks: ";
    cin >> n;
    char source = 'S';
    char auxilary = 'A';
    char destination = 'D';

    tower_of_hanoi(n, source, auxilary, destination);

    return 0;
}