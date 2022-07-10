// count distinct array element using hash _MAX_PATH

#include <iostream>
#include<unordered_set>
using namespace std;
int main()
{
     unordered_set<int>s;
    int arr[]={2,2,3,2};
    int n=4;
   
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    cout<<s.size()<<endl;

    

    return 0;
}
