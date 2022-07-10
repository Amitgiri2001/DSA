// Here we implement Queue data structure using stack.
/* Here the idea is very simple that is 
1.when we want to push any number this is very simple is stack.
2.but is case of dequeue we needs to use 2 different stack 
because we kno that stack is follow lifo tech and queue is followed fifo*/

#include <iostream>
#include<stack>
using namespace std;
class queue_using_stack
{
private:stack<int>s1;
stack<int>s2;
int size;
    /* data */
public:
    queue_using_stack(/* args */){
        size=0;
    }
    void enqueue(int ele){
        s1.push(ele);
        size++;
    }
    int dequeue()
    {
        size--;
        while(s1.size()!=1){
            s2.push(s1.top());
            s1.pop();
        }
        int temp=s1.top();
        s1.pop();
        while(s2.size()!=0){
            s1.push(s2.top());
            s2.pop();
        }
        return temp;
    }
    bool isEmpty(){
        if(size==0){
            return true;
        }
        else{
            return false;
        }
    }
    int Size(){
        return size;
    }
    
};



int main()
{
    queue_using_stack Q;
    Q.enqueue(1);
    Q.enqueue(10);
    Q.enqueue(11);

    cout<<Q.isEmpty()<<" ";
    cout<<Q.dequeue()<<" ";
    cout<<Q.dequeue()<<" ";
    cout<<Q.dequeue()<<" ";
    cout<<Q.isEmpty()<<" ";


    

    return 0;
}