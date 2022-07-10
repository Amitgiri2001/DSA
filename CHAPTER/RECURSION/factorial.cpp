// we want to find the sum of digit
// if 1234=1+2+3+4==10

#include <iostream>
#include<math.h>
using namespace std;

int factorial(int n){
    // base case
    if(n==0){
        return 1;
    }
    
    // recursive call
    
    return n*factorial(n-1);

}
int main()
{
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    int ans=factorial(k);
    cout<<"The answer is= "<<ans;

    

    return 0;
}