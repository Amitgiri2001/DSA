// traversal all the list element and print all

#include <iostream>
int start = 1;
using namespace std;

// create a structure of node--------
struct Node
{
    int data;
    Node *next;
    Node *pre; // here node use for the data type
               // create a constructor
    Node(int x)
    {
        data = x;
        next = NULL;
        pre = NULL;
    }
};
void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}



Node *InsertAtBegin(Node *head, int key)
{
    Node *n=new Node(key);
    if(head==NULL){
        // n->next=head;
        // n->pre=NULL;
        return n;
    }
    n->next=head;
    head->pre=n;
    return n;
    
}
Node *InsertAtEnd(Node *head, int key)
{
    Node *n=new Node(key);
    if(head==NULL){
        // n->next=head;
        // n->pre=NULL;
        return n;
    }
    Node *curr=head;
    while(curr->next !=NULL){
        curr=curr->next;

    }
    curr->next=n;
    n->pre=curr;
    return head;
    
    
}
Node *InsertAtPos(Node *head, int key,int pos)
{
    Node *n=new Node(key);
    if(pos==1 || head==NULL){
        head = InsertAtBegin(head, key);
        // n->next=head;
        // n->pre=NULL;
        return head;
    }
    Node *curr=head;
    for(int i=1;i<pos-1;i++){
        curr=curr->next;
    }
    Node *temp=curr->next;
   curr->next=n;
   n->next=temp;
    
   
    return head;
    
    
}
Node *DeleteHead(Node *head){
    Node *curr=head->next;
    curr->pre=NULL;
    delete head;
  
    return curr;
}
Node *DeletePos(Node *head,int pos){
    if(pos==1){
        head=DeleteHead(head);
        return head;
    }
    Node *curr=head;
    while(pos !=0){
        curr=curr->next;
        pos--;
    }
    curr->pre->next=curr->next;
    if(curr->next != NULL){
        curr->next->pre=curr->pre;
    }
    delete curr;
    return head;
}
int main()
{
    Node *head = NULL;
    head = InsertAtEnd(head, 6);
    printlist(head);
    cout << endl;
    head = InsertAtBegin(head, 10);
    printlist(head);
    cout << endl;
    head = InsertAtBegin(head, 20);
    printlist(head);
    cout << endl;
    head = InsertAtBegin(head, 30);
    printlist(head);
    cout << endl;
    head = InsertAtEnd(head, 36);
    printlist(head);
    cout << endl;
    head = InsertAtPos(head, 25,3);
    printlist(head);
    cout << endl;
    head = InsertAtPos(head, 15,1);
    printlist(head);
    cout << endl;
    head =DeleteHead(head);
    printlist(head);
    cout << endl;
    head =DeletePos(head,2);
    printlist(head);
    cout << endl;
    head =DeletePos(head,1);
    printlist(head);
    cout << endl;

    return 0;
}