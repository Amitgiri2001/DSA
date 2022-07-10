// We need to print all the nodes at depth k

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
void printK_depthNodes(Node *root, int k)
{

    // Base Case
    if (root == NULL)
    {
        return;
    }
    // Some Calculation
    if (k == 0)
    {
        cout << root->data << " ";
        return;
    }

    // REcursive call
    printK_depthNodes(root->left, k - 1);
    printK_depthNodes(root->right, k - 1);
}
int main()
{
    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->left->left = new Node(5);
    root->right->right = new Node(41);
    root->right->left = new Node(5);
    root->right->right->left = new Node(4);
    // root->right->left->right = new Node(5);
    // root->right->left->right->right = new Node(5);
    printK_depthNodes(root, k);
}