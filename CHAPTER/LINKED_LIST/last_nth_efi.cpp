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

void middle(Node *head, int n)
{
    if (head == NULL)
    {
        return;
    }
    Node *first = head;
    for (int i = 1; i <= n; i++)
    {
        first = first->next;
    }
    Node *sec = head;
    while (first != NULL)
    {
        first = first->next;
        sec = sec->next;
    }
    cout << sec->data << endl;
}
int main()
{
    // Node *head=NULL;
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    head->next->next->next = new Node(40);

    middle(head, 4);
    return 0;
}