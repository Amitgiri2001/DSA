// traversal all the list element and print all

#include <iostream>
int start = 1;
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
int search(Node *head, int key)
{

        if (head == NULL)
    {
        return -1;
    }

    if (head->data == key)
    {
        return start;
    }

    start++;

    head = head->next;
    search(head, key);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    int key;
    cout << "please enter the search elements";
    cin >> key;

    cout << search(head, key);

    return 0;
}