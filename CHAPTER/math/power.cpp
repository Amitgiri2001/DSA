// calculate the pawer of a number----

/* 
#include <iostream>
using namespace std;
int power(int n,int x){
    int total=1;
    for(int i=1;i<=x;i++){
        total=total*n;

    }
    return total;
}
int main()
{
    int n,x;
    cout<<"Enter a number :";
    cin>>n>>x;
    cout<<power(n,x);

    

    return 0;
}
*/
#include <iostream>
using namespace std;
int power(int n,int x){
    int total=1;
    for(int i=1;i<=x;i++){
        total=total*n;
    }
    return total;
}
int power_num(int n,int x){
    if(x%2==0){
        return power(n,x/2)*power(n,x/2);
    }
    else{
        return power(n,x-1)*n;
    }
}
int main()
{
    int n,x;
    cout<<"Enter a number :";
    cin>>n>>x;
    cout<<power_num(n,x);
    return 0;
}