// traversal all the list element and print all

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
int search(Node *head, int key)
{
    Node *curr = head;
    int start = 1;
    while (curr != NULL)
    {

        if (curr->data == key)
        {
            return start;
        }

        start ++;

        curr = curr->next;
    }
    return -1;
}
int pos=0;
int SearchRecursive(Node *head,int x){
    // base case
    Node *curr=head;
    pos++;
    
    if(curr==NULL) return -1;
    if(curr->data==x) return pos;
    // recursive call
    SearchRecursive(curr->next,x);
}

int main()
{
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);
    int key;
    cout << "please enter the search elements: ";
    cin >> key;

    // cout << search(head, key);
    cout << SearchRecursive(head, key);

    return 0;
}