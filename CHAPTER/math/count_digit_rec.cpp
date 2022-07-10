
#include <iostream>
using namespace std;
int countDigit(long long int n){
    if(n==0)
    return 0;
   
    return 1+countDigit(n/10);
}
int main()
{
    long long int x; //we use long long int for calculate big digit number...
    cout<<"Enter a long digit number for count digits: ";
    cin>>x;
    cout<<countDigit(x)<<endl;

    

    return 0;
}