// traversal all the list element and print all 

#include <iostream>
using namespace std;

// create a structure of node--------
struct Node{
    int data;
    Node *next;  
    Node *pre; // here node use for the data type
// create a constructor
    Node(int x){
        data=x;
        next=NULL;
        pre=NULL;
    }
};
void printlist(Node *head){
    Node *curr=head ;
    while (curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
Node *DInsertbeg(Node *head,int data)
{
    Node *temp=new Node (data);
    temp->pre=NULL;
    temp->next=head;
    head->pre=temp;
    return head;

}



int main()
{
   
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

   

    head=DInsertbeg(head,2);

    
     printlist(head);

    return 0;
}