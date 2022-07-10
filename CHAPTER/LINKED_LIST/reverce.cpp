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
// this is recursive solution---------
Node *reverselist(Node *head)
{
    if (head == NULL || head->next == NULL)
        return head;

    /* reverse the rest list and put
      the first element at the end */
    Node *rest = reverselist(head->next);
    head->next->next = head;

    /* tricky step -- see the diagram */
    head->next = NULL;

    /* fix the head pointer */
    return rest;
}
Node *reverse(Node *head)
{
    Node *pre = NULL;
    Node *curr = head;
    Node *nextptr;

    while (curr != NULL)
    {
        nextptr = curr->next;
        curr->next = pre;

        pre = curr;
        curr = nextptr;
    }
    return pre;
}
int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);
    head = reverselist(head);
    // head = reverse(head);
    printlist(head);
    return 0;
}




