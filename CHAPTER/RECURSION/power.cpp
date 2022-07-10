

#include <iostream>
using namespace std;
int power(int n,int m){
    // Base case
    if(m==0){
        return 1;
    }

    // calculation
    int ans=n*power(n,m-1);

    // recursive call
    return ans;
}
int main()
{
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the power number:"<<endl;
    cin>>m;
    cout<<"the "<<n<<" to the power  " <<m<<" is "<<power(n,m);

    return 0;
}