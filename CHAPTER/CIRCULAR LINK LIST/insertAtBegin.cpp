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

    return 0;
}