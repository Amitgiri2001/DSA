#include <iostream>
#include<set>
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
// for printing Full link List
void printList(Node *head)
{
    Node *curr = head;
    while (curr)
    {
        cout << curr->data << "->";
        curr = curr->next;
    }
    cout << endl;
}
// Reverse The link list
Node *reverse(Node *head)
{
    Node *pre = NULL;
    Node *curr = head;
    Node *nextptr;
    while (curr)
    {
        nextptr = curr->next;
        curr->next = pre;
        pre = curr;
        curr = nextptr;
    }
    return pre;
}

// 1.Remove nodes which have greater value on their right side
Node *greaterValue(Node *head)
{
    head = reverse(head);
    Node *curr = head;
    Node *dummy = new Node(0);
    Node *dummy2=dummy;
    int currMax = head->data;
    while (curr)
    {
        if (curr->data >= currMax)
        {
            currMax = curr->data;
            dummy->next = curr;
            dummy = dummy->next;
        }      
        curr = curr->next;
    }
    dummy->next=NULL;
    return (reverse(dummy2->next));
}

// 2.Remove Duplicates Form a link List(Unsorted) --->***************Incomplete***************************
Node *removeDuplicates(Node *head){
    Node *curr=head;
   set<int>us;
   while(curr){
       us.insert(curr->data);
       curr=curr->next;
   }
   Node *curr2=head;
   while(curr2){
       Node *curr3=curr2->next;
       if(us.find(curr3->data)!=us.end()){

       }
   }
    


}

int main()
{
    Node *head = new Node(5);
    head->next = new Node(20);
    head->next->next = new Node(15);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(12);

    printList(head);

    // head = reverse(head);
    head=greaterValue(head);
    printList(head);

    return 0;
}