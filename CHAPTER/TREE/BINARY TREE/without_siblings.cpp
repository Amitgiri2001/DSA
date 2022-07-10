// we want to print the all nodes which have no siblings.

#include <iostream>
using namespace std;
int ans = 0;
// int count=0;
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

void without_siblings(Node *root)
{

    // Base Case
    if (root == NULL)
    {
        return ;
    }
    // Some Calculation
   if(root->left!=NULL && root->right==NULL) {

       cout<<root->left->data<<" ";
   }
   else if(root->left==NULL && root->right!=NULL) {

       cout<<root->right->data<<" ";
   }
    // REcursive call
    without_siblings(root->left);
    without_siblings(root->right);

}
int main()
{
    

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(5);
    root->left->left = new Node(5);
    root->left->right->left = new Node(9);
    
    // root->right->right = new Node(41);
    // root->right->left = new Node(5);
    // root->right->right->left = new Node(4);
    // root->right->left->right = new Node(5);
    // root->right->left->right->right = new Node(5);
    without_siblings(root);
    
}