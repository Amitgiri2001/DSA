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
Node *insertathead(Node *head, int key)
{
    Node *temp = new Node(key);
    temp->next = head;
    if (head != NULL)
    {
        head->pre = temp;
    }

    head = temp;

    return head;
}

Node *insertend(Node *head, int key)
{
    Node *temp = new Node(key);

    if (head == NULL)
    {
        head = insertathead(head, key);
        return head;
    }
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->pre = curr;
    return head;

    // printlist(head);
}

int main()
{
    Node *head = NULL;
    head = insertend(head, 10);
    printlist(head);
    cout << endl;
    head = insertend(head, 20);
    printlist(head);
    cout << endl;

    head = insertend(head, 30);
    printlist(head);
    cout << endl;
    head = insertathead(head, 45);

    printlist(head);

    return 0;
}