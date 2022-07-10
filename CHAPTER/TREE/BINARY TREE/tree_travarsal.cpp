#include <bits/stdc++.h>
using namespace std;
int i = 1;
// create a node
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

void print_PreOrder(Node *root)
{
    // Base case
    if (root == NULL)
    {
        return;
    }
    // Some Dos
    cout << root->data << " ";

    // Recursive call
    print_PreOrder(root->left);
    print_PreOrder(root->right);
}
void print_PostOrder(Node *root)
{
    // Base case
    if (root == NULL)
    {
        return;
    }

    // Recursive call
    print_PostOrder(root->left);

    print_PostOrder(root->right);
    // Some Dos
    cout << root->data << " ";
}
void print_InOrder(Node *root)
{
    // Base case
    if (root == NULL)
    {
        return;
    }

    // Recursive call
    print_InOrder(root->left);
    // Some Dos
    cout << root->data << " ";
    print_InOrder(root->right);
}
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);

    // Node *root = newNodeBetter(true);
    print_PreOrder(root);
    cout << endl;
    print_InOrder(root);
    cout << endl;
    print_PostOrder(root);

    return 0;
}