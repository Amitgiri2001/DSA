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
void insertAt_pos(Node *&head, int pos,int val)
{

    Node *p = new Node(val);
    if (pos==1)
    {
        InsertAtHead(head, val);
        return;
    }
    Node *temp = head;
    int count =1;

    while (count !=pos-1)
    {
        temp = temp->next;
        count++;
    }
   Node *after=temp->next;
   temp->next=p;
   p->next=after;
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
    
    InsertAtHead(head, 4);
    printlist(head);
    InsertAtHead(head, 3);
    printlist(head);
    InsertAtHead(head, 2);
    printlist(head);
    InsertAtHead(head, 9);
    printlist(head);
    insertAt_pos(head,3,66);
    printlist(head);
    insertAt_pos(head,1,66);
    printlist(head);

    return 0;
}