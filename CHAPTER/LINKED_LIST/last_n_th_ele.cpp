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

void middle( Node *head,int n){
    if(head==NULL){
        return;
    }
     Node *temp=head;
    Node *curr=head;
    int count =0;
    while( temp!=NULL){
        count++;
        temp=temp->next;

    }
    for(int i=1;i<=count-n;i++){
        curr=curr->next;

    }
    cout<<curr->data<<endl;
   

}
int main(){
    // Node *head=NULL;
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);

    middle(head,3);
    return 0;

}