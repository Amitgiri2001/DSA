// WE want to print the hight of a tree

#include <iostream>
using namespace std;
int lHight = 0;
int rHight = 0;
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
int hightOfATree(Node *root)
{

    // Base Case
    if (root == NULL)
    {
        return 0;
    }

    // REcursive call
    int leftCountSum = hightOfATree(root->left);
    int rightCountSum = hightOfATree(root->right);
    // Some Calculation
    if (leftCountSum > rightCountSum)
    {
        return (1 + leftCountSum);
    }
    else
    {
        return (1 + rightCountSum);
    }
}
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->left->right = new Node(5);
    root->right->left->right->right = new Node(5);
    cout << hightOfATree(root) << endl;

    return 0;
}