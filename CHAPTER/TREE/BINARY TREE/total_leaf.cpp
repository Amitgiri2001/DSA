// We need to print total number of leaf in a tree.
// WE want to print the hight of a tree

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
int noOfLeaf(Node *root)
{

    // Base Case
    if (root == NULL)
    {
        return 0;
    }

    // REcursive call
    int leftCountSum = noOfLeaf(root->left);
    int rightCountSum = noOfLeaf(root->right);
    // Some Calculation

    if (root->left == NULL && root->right == NULL)
    {
        return (1 + leftCountSum + rightCountSum);
    }
    else
    {
        return (0 + leftCountSum + rightCountSum);
    }
}
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->right = new Node(4);
    root->right->left = new Node(5);
    // root->right->left->right = new Node(5);
    // root->right->left->right->right = new Node(5);
    cout << noOfLeaf(root) << endl;

    return 0;
}