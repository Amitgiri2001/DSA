// we wants to calculate the geometric sum of a number
// ifk==3 then 1 + 1/2 + 1/2^2+ 1/2^3;

#include <iostream>
#include<math.h>
using namespace std;

float geometricSum(int k){
    // base case
    if(k==0){
        return 1;
    }
    // recursive call
    
    float ans= ((1/pow(2,k))+geometricSum(k-1));
    // cout<<ans<<endl;
    // cout<<pow(2,k)<<endl;
    return ans;
}
int main()
{
    int k;
    cout<<"Enter the value of k: ";
    cin>>k;
    float ans=geometricSum(k);
    cout<<"The answer is= "<<ans;

    

    return 0;
}