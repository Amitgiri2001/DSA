// We need to count total sum of nodes in a tree
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
int countNodeSum(Node *root){
    
    // Base Case
    if(root==NULL){
        return 0;
    }

    // Some Calculation
    

    // REcursive call
    int leftCountSum=countNodeSum(root->left);
    int rightCountSum=countNodeSum(root->right);
    return (root->data+leftCountSum+rightCountSum);

}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->right=new Node(4);
    root->right->left=new Node(5);
    cout<<countNodeSum(root)<<endl;

    return 0;
}