#include<iostream>
using namespace std;


struct Node{
    int data;
    Node *next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void middle( Node *head){
    Node *temp=head;
    int count =0;
    Node *curr=head;
    while( temp!=NULL){
        count++;
        temp=temp->next;

    }
    for(int i=1;i<=count/2;i++){
        curr=curr->next;

    }
    cout<<curr->data<<endl;




}
int main(){
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    // head->next->next->next=new Node(40);

    middle(head);
    return 0;

}