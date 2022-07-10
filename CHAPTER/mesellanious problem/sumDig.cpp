

#include <iostream>
using namespace std;
totalDigit(int ans){
    int digit=0;
    while(ans!=0){
        digit++;
        ans=ans/10;
    }
    return digit;
}
int sumDig(int num,int digit){
    int ans=0;
    while(totalDigit(ans)!=digit){
        ans=ans+num;
    }
    return ans;
}
int main()
{
    int num=9;
    int digit=2;
    cout<<sumDig(num,digit);

    

    return 0;
}