

#include <iostream>
using namespace std;

// create a structure of node--------
struct Node
{
    int data;
    Node *next; 
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

int ith_node(Node *head,int i){
    int count=1;
    Node *curr=head;

    while(curr){
        if(count==i){
            // cout<<i<<" th node value is: "<<curr->data<<endl;
            return curr->data;
        }
        curr=curr->next;
        count++;
    }
    return -1;
}


void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}

int main()
{

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    cout<<ith_node(head,2)<<endl;
    

    return 0;
}