// traversal all the list element and print all 

#include <iostream>
using namespace std;

// create a structure of node--------
struct Node{
    int data;
    Node *next;  // here node use for the data type
// create a constructor
    Node(int x){
        data=x;
        next=NULL;
    }
};
Node *deletehead(Node *head){
    if(head==NULL){
        return head;
    }
   

    head=head->next ;
    
    return head;

    
}
void printlist(Node *head){
    Node *curr=head ;
    while (curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}



int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);

    cout<<head<<endl;

    head=deletehead(head);

    cout<<head<<endl;
     printlist(head);

    return 0;
}