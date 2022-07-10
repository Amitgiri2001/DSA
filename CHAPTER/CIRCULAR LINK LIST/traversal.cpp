// all about circular link list

#include <iostream>
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
void InsertAtHead(Node *&head, int val)
{
    Node *p = new Node(val);
    if (head == NULL)
    {
        p->next = p;
        head = p;
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = p;
    p->next = head;
    head = p;
}

void insertAtTail(Node *&head, int val)
{

    Node *p = new Node(val);
    if (head == NULL)
    {
        InsertAtHead(head, val);
        return;
    }
    Node *temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    temp->next = p;
    p->next = head;
}
void delete_Head(Node *&head){
    Node *temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    Node *to_delete=head;
    temp->next=head->next;
    head=head->next;
    delete to_delete;

}
void delete_pos(Node *&head,int pos){
    Node *temp=head;
    if(pos==1){
        delete_Head(head);
        return;
    }
    int count=1;
    while(count !=pos-1){
        temp=temp->next;
        count++;

    }
    Node *del=temp->next;
    temp->next=temp->next->next;
    delete del;

}
void printlist(Node *head)
{
    Node *curr = head;
    do
    {
        cout << curr->data << " ";
        curr = curr->next;
    } while (curr != head);
    cout<<endl;
}

int main()
{
    Node *head = NULL;
    insertAtTail(head, 2);
    InsertAtHead(head, 4);
    insertAtTail(head, 6);
    printlist(head);
    InsertAtHead(head, 7);
    printlist(head);
    delete_pos(head,1);
    printlist(head);
    delete_pos(head,1);
    printlist(head);

    return 0;
}