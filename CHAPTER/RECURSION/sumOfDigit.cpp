// we want to find the sum of digit
// if 1234=1+2+3+4==10

#include <iostream>
#include<math.h>
using namespace std;

int sumOfDigits(int n){
    // base case
    if(n==0){
        return 0;
    }
    
    // recursive call
    int lastDigit=n%10;
    return lastDigit+sumOfDigits(n/10);

}
int main()
{
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    int ans=sumOfDigits(k);
    cout<<"The answer is= "<<ans;

    

    return 0;
}