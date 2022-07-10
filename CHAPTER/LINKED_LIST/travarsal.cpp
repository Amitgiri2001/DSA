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

void PrintRecursive(Node *head){
    Node *curr=head;

    if(curr==NULL){
        return;
    }

    // calculation
    cout<<curr->data<<" ";

    // Recursive call
    PrintRecursive(curr->next);
}



int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);

    // printlist(head);
    PrintRecursive(head);

    

    return 0;
}