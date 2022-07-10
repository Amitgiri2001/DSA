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
Node *insertpos(Node *head, int data, int pos)
{
    Node *temp = new Node(data);
    if (pos == 1)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    if (curr == NULL)
    {
        return temp;
    }
    for (int i = 1; i < pos - 1; i++)
    {
        curr = curr->next;
    }
    temp->next = curr->next;
     curr->next=temp;
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
    head->next->next->next=new Node(40);

   

    head=insertpos(head, 25, 5);

    
     printlist(head);

    return 0;
}