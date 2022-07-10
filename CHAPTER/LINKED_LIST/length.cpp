

#include <iostream>
using namespace std;

// create a structure of node--------
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

int length(Node *head){
    Node *curr=head;
    int count=0;
    while(curr->data !=-1){
        count++;
        curr=curr->next;

    }
    return count;
}



void printlist(Node *head)
{
    Node *curr = head;
    while (curr != NULL)
    {
        cout << (curr->data) << " ";
        curr = curr->next;
    }
}

int main()
{

    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(-1);
    head->next->next->next = new Node(30);
    // head->next->next = new Node(30);
    head->next->next->next->next = new Node(-1);
    cout<<length(head);

    

    return 0;
}