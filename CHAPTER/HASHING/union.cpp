
#include <iostream>
#include<unordered_set>
#include<set>
using namespace std;
int main()
{
     unordered_set<int>s;
    int a[]={2,2,3,2};
    int b[]={6,7,9,3};

    int n=4;
   
    for(int i=0;i<n;i++){
        s.insert(a[i]);
    }
    for(int i=0;i<n;i++){
        s.insert(b[i]);
    }
    cout<<s.size()<<endl;

    

    return 0;
}