// HEre we  want to reverse first k element of Queue.
// My brute force solution is using stack.


#include <iostream>
#include<stack>
#include<queue>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    int k=2;
    stack<int>s;
    queue<int>q;
    for(int i=0;i<5;i++){
        q.push(arr[i]);
    }
    for(int i=0;i<k;i++){
        s.push(q.front());
        q.pop();
    }
    while(s.empty()!=true){
        cout<<s.top()<<" ";
        s.pop();
    }
    while(q.empty()!=true){
        cout<<q.front()<<" ";
        q.pop();
    }



    

    return 0;
}