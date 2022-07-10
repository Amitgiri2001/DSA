// traversal all the list element and print all

#include <iostream>
int start = 1;
using namespace std;

// create a structure of node--------
struct Node
{
    int data;
    Node *next; // here node use for the data type
                // create a constructor
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
void printlist(Node *head){
    Node *curr=head ;
    while (curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}

Node *insertend(Node *head, int key)
{
    Node *temp=new Node(key);

        if (head == NULL)
    {
        return temp;
        
    }
    Node *curr=head;
    while(curr->next !=NULL){
        curr=curr->next;
    }
    curr->next=temp;
    return head;

    // printlist(head);


   
}

int main()
{
    Node *head = NULL;
    head=insertend(head,10);
    cout<<head<<" ";
    head=insertend(head,20);
    cout<<head<<" ";
    head=insertend(head,30);
    cout<<head<<" ";

     printlist(head);
    

    return 0;
}