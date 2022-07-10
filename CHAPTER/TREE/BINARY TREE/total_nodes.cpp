// We need to count total number of nodes in a tree
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
int countNode(Node *root){
    
    // Base Case
    if(root==NULL){
        return 0;
    }

    // Some Calculation
    

    // REcursive call
    int leftCount=countNode(root->left);
    int rightCount=countNode(root->right);
    return (1+leftCount+rightCount);

}
int main(){
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    // root->left->right=new Node(4);
    // root->right->left=new Node(5);
    cout<<countNode(root)<<endl;

    return 0;
}