// We want to print all prime number that are lower than any number:


#include <iostream>
#include<math.h>
using namespace std;
bool prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
void smaller_prime(int n){
    for(int i=2;i<n;i++){
        if(prime(i)){
            cout<<i<<" ";
        }
    }

}
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    smaller_prime(n);

    

    return 0;
}