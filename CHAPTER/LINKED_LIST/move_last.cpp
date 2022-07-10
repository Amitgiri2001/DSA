#include <iostream>
using namespace std;

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
void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}


Node *move_last(Node *head)
{
    Node *curr=head;
    while(curr->next->next !=NULL){
        curr=curr->next;

    }
    Node *temp=curr->next;
    curr->next=NULL;
    temp->next=head;
    head=temp;
    return head;
    
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = move_last(head);
    // head = reverse(head);
    printlist(head);
    return 0;
}




