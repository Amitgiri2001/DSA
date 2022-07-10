// we want to delete all the leaf of a tree
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
void printLikeTree(Node *root)
{
    // Base case
    if (root == NULL)
    {
        return;
    }
    // Some Dos
    cout << root->data << ": ";
    if (root->left == NULL)
    {
        cout << "L-null"
             << " ";
    }
    else
    {
        cout << "L-" << root->left->data << " ";
    }
    if (root->right == NULL)
    {
        cout << "R-null"
             << " ";
    }
    else
    {
        cout << "R-" << root->right->data << " ";
    }
    cout << endl;

    // Recursively call
    printLikeTree(root->left);
    printLikeTree(root->right);
}
Node* deleteLeaf(Node *root)
{

    // Base Case
    if (root == NULL)
    {
        return NULL;
    }
    // Some Calculation
   if(root->left==NULL && root->right==NULL){
        return NULL;
   }
    // REcursive call
    root->left=deleteLeaf(root->left);
    root->right=deleteLeaf(root->right);
    return root;

}
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(4);
    root->left->left = new Node(5);
    root->left->left->right = new Node(5);
    
    root=deleteLeaf(root);
    printLikeTree(root);
    
}