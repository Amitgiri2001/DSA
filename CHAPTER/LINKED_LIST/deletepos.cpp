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
Node *deltail(Node *head,int pos)
{
    Node *curr = head;
   for(int i=1;i<pos-1;i++){
       curr=curr->next;
   }
    curr->next=curr->next->next;
    return head;

}



int main()
{
   
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

   

    head=deltail(head,2);

    
     printlist(head);

    return 0;
}