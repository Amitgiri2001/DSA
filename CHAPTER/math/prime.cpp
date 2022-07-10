
//  check a number is prime or not----
/*
#include <iostream>
using namespace std;
void prime(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            cout<<"it is not a prime number..";
           
            return;
        }
    }
     cout<<"it is a prime number..";
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    prime(n);
   
    return 0;
}



Better approach:

#include <iostream>
#include <math.h>
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

void prime_factor(int n)
{

    for (int i = 2; i <= n; i++)
    {
        int x = i;
        if (prime(i) == true)
        {
            while (n % x == 0)
            {
                cout << i << " ";
                x = x * i;
            }
        }
    }
}

#include <iostream>
#include <math.h>
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

void prime_factor(int n)
{

    while (n % 2 == 0)
    {
        cout << 2 << " ";
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << " ";
        n = n / 3;
    }
    for (int i = 5; i <= sqrt(n); i=i+6)
    {
        while (n % i == 0)
    {
        cout << i << " ";
        n = n / i;
    }
       while (n % (i+2) == 0)
    {
        cout << i+2 << " ";
        n = n / (i+2);
    }
    }
    if (n > 3)
    {
        cout << n << " ";
    }
}
int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;
    prime_factor(n);

    return 0;
}
*/

#include<iostream>
#include<math.h>
using namespace std;
void prime_factor(int n){
int arr[n+1]={0};
 for(int i=2;i<=sqrt(n);i++){
     if(arr[i]==0){
         for(int j=i*2;j<=n;j=j+i){
             arr[j]=1;
         }
     }
 }
 for(int i=2;i<=n;i++){
     if(arr[i]==0){
        cout<<i<<" ";
     }
 }


}


int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    prime_factor(n);


    return 0;
}
