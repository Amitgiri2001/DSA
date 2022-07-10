

#include <iostream>
using namespace std;
int countDigit(long long int n){
    int count=0;
    while(n!=0){
        count++;
        n/=10;
    }
    return count;
}
int main()
{
    long long int x; //we use long long int for calculate big digit number...
    cout<<"Enter a long digit number for count digits: ";
    cin>>x;
    cout<<countDigit(x)<<endl;

    

    return 0;
}