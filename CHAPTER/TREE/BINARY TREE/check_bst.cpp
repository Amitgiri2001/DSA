// we want to  create a tree using array

#include <iostream>
#include<math.h>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
int Maxleft(Node* root){
    if(root==NULL){
        return INT_MIN;
    }
    int leftM=Maxleft(root->left);
    int rightM=Maxleft(root->right);
    return max(root->data,max(leftM,rightM));
}
int Minright(Node* root){
    if(root==NULL){
        return INT_MAX;
    }
    int leftM=Minright(root->left);
    int rightM=Minright(root->right);
    return min(root->data,min(leftM,rightM));
}
bool isBST(Node *root)
{
    // Base Case
    if (root == NULL)
    {
        return true;
    }
    // Calculation
    int leftMax=Maxleft(root->left);
    // cout<<leftMax<<endl;
    if (leftMax>=root->data)
    {
        return false;
    }
    int rightMin=Minright(root->right);
    // cout<<leftMax<<endl;
    if (rightMin<root->data)
    {
        return false;
    }

    // Recursion
    return (isBST(root->left) && isBST(root->right));
}

int main()
{
    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    // root->left->right = new Node(33);
    root->left->left = new Node(1);
    root->right->right = new Node(10);
    root->right->left = new Node(5);
    cout << isBST(root);

    return 0;
}