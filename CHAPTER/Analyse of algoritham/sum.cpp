// sum of first n natural numbers-----

#include <iostream>
using namespace std;
int sum_rec(int n){
    if(n==1)
    return 1;
    return (n+sum_rec(n-1));
}
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<sum(n)<<endl;;
    cout<<sum_rec(n)<<endl;;

    

    return 0;
}