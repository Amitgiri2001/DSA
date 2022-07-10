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
void printlist(Node *head){
    Node *curr=head ;
    while (curr!=NULL){
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
Node *deltail(Node *head)
{
    Node *temp = head;
    while(temp->next->next !=NULL){
       temp=temp->next;
    }
    temp->next=NULL;
    return head;

}



int main()
{
   
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

   

    head=deltail(head);

    
     printlist(head);

    return 0;
}