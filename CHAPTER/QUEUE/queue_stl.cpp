

#include <iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;
   
    q.push(2);
    q.push(22);
    q.push(23);
    cout<<q.size()<<" ";
    q.pop();
    cout<<q.front()<<" ";
    cout<<q.empty()<<" ";
    


    

    return 0;
}