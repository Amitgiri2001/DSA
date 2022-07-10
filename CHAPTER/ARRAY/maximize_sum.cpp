#include <iostream>
using namespace std;

int maximize_sum(int a[],int b[],int n,int m){
    int maxSum=0;
    int s1=0,s2=0;
    int i,j=0;

    while (i<n && j<m)
    {
        if(a[i]<b[j]){
            s1+=a[i];
            i++;
        }
        else if(b[j]<a[i]){
            s2+=b[j];
            j++;
        }
        else{
            s1+=a[i];
            s2+=b[j];
            i++;j++;
            (s1>s2)?maxSum+s1:maxSum+s2;
            s1=0;s2=0;
        }
        /* code */
    }
    while(i<n){
        maxSum+=a[i];
    }
    while(j<m){
        maxSum+=b[j];
    }
    
    return maxSum;
}

int main()
{
    int a[] = {1, 5, 6, 8, 11, 25, 32};
    int b[] = {2, 3, 5, 7, 25};

    cout<<maximize_sum(a,b,7,5);
    return 0;
}