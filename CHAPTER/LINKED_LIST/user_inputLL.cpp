

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

Node *createNode(Node *head, int data)
{
    Node *curr = head;
    // for create head node first
    if (head->next == NULL && head->data == -1)
    {
        Node *temp = new Node(data);
        head = temp;
        return head;
    }
    // else create other nodes
    while (curr->next != NULL)
    {
        curr = curr->next;
    }
    Node *temp = new Node(data);
    curr->next = temp;
    return head;
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

    Node *head = new Node(0);
    Node *tail=new Node(0);
    int val;

    // /// ----------O(n^2) time complexity
    // while(val!=-1){
    //     cout<<"Enter the Value of nodes you want to insert or give -1 for stop inserting : "<<endl;
    //     cin>>val;
    //     if(val!=-1)
    //         head=createNode(head,val);

    // }

    cout << "Enter the Value of nodes you want to insert or give -1 for stop inserting : " << endl;
    cin >> val;
    while (val != -1)
    {
        Node *curr=new Node(val);
        if (head->data == 0)
        {
            head=curr;
            // head->next=NULL;
           tail=curr;
        }
        else{
            tail->next=curr;
            tail=curr;

        }
    }

    printlist(head);

    return 0;
}