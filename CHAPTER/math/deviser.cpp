// print all devisers of a number in  increase order.
/*

#include <iostream>
using namespace std;
void devisers(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    devisers(n);



    return 0;
}
*/

// efficient solution---
#include <iostream>
#include <math.h>
using namespace std;
void devisers(int n)
{
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
          
        }
    }
    for (int i =sqrt(n) ; i >=1 ; i--)
    {
        if (n % i == 0)
        {
            cout << n/i << " ";
          
        }
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    devisers(n);

    return 0;
}