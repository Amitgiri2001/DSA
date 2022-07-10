// Nodes Greater Than X
// we needs to print total number of nodes which are greater than X.
#include<iostream>
using namespace std;
// int count=0;
struct Node{
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
int Nodes_Greater_Than_X(Node *root,int X){
    
    // Base Case
    if(root==NULL){
        return 0;
    }

    

    // REcursive call
    int leftCountSum=Nodes_Greater_Than_X(root->left,X);
    int rightCountSum=Nodes_Greater_Than_X(root->right,X);
    // Some Calculation
    if(root->data>X){
    return (1+leftCountSum+rightCountSum);
    }else{
    return (0+leftCountSum+rightCountSum);
    }

}
int main(){
    int x;
    cout<<"Enter a number: ";
    cin>>x;
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(4);
    root->right->left=new Node(5);
    cout<<Nodes_Greater_Than_X(root,x)<<endl;

    return 0;
}