// We need to count total sum of nodes in a tree
#include<iostream>
#include<math.h>
using namespace std;
int maxNode=INT_MIN;
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
int largestNode(Node *root){
    
    // Base Case
    if(root==NULL){
        return 0;
    }

    // Some Calculation
    if(root->data>maxNode){
        maxNode=root->data;
    }
    

    // REcursive call
    int leftCountSum=largestNode(root->left);
    int rightCountSum=largestNode(root->right);
    return maxNode;

}
int largestNodeBetter(Node *root){
    
    // Base Case
    if(root==NULL){
        return -1;
    }

    
    

    // REcursive call
    int leftCountSum=largestNodeBetter(root->left);
    int rightCountSum=largestNodeBetter(root->right);
    // return maxNode;
    // Some Calculation

    return max(root->data,max(leftCountSum,rightCountSum));
    /*
    if(root->data>=leftCountSum && root->data>=rightCountSum){
        return root->data;
    }
    else if(leftCountSum>=root->data && leftCountSum>=rightCountSum){
        return leftCountSum;
    }
    else{
        return rightCountSum;
    }
*/

}
int main(){
    Node* root=new Node(1);
    root->left=new Node(213);
    root->right=new Node(333);
    root->left->right=new Node(41);
    root->right->left=new Node(5);
    cout<<largestNodeBetter(root)<<endl;

    return 0;
}