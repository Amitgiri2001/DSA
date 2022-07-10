// tower of hanoi problem

#include <iostream>
using namespace std;
void towerOfHanoi(int n,char s,char a,char d){
    // Base case
    if(n==1){
        cout<<s<<" to "<<d<<endl;
        return;
    }


    // Recursive call and calculation
    towerOfHanoi(n-1,s,d,a);
    cout<<s<<" to "<<d<<endl;
    towerOfHanoi(n-1,a,s,d);
}
int main()
{
    char s='S';
    char a='A';
    char d='D';
    int n=4;
    towerOfHanoi(n,s,a,d);

    

    return 0;
}