// move all disk from source tower to destination tower using helping tower
// using as little times move as possible

#include <iostream>
using namespace std;
void toh(int n, char A, char B, char C)
{
    // Base case
    // if one disk is present then this disk is move from A to C
    if (n >= 1)
    {

        // move  (n-1) disk from A tower to B using C as a helping tower
        toh(n - 1, A, C, B);
        // move  (nth) disk from A tower to C
        cout << "move "<<n<<" disk from tower " << A << " to " << C<<endl;
        // move  (n-1) disk from B tower to C using A as a helping tower
        toh(n - 1, B, A, C);
    }
}
int main()
{
    int n;
    cout << "total disk number=";
    cin >> n;
    // char s='A';
    // char h= 'B';
    // char d='C';
    toh(n, 'A','B' ,'C' );
    return 0;
}