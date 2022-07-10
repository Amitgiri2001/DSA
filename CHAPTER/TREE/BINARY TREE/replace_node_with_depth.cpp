// we want to replace_node_with_depth
// like 0th node all are replaced with 0.
// 1 depth all nodes are replaced with 1 and so on....


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
void replace_node_with_depth(Node *root, int level)
{

    // Base Case
    if (root == NULL)
    {
        return;
    }
    // Some Calculation
    root->data=level;

    // REcursive call
    replace_node_with_depth(root->left, level + 1);
    replace_node_with_depth(root->right, level + 1);

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
    // root->right->right = new Node(41);
    // root->right->left = new Node(5);
    // root->right->right->left = new Node(4);
    // root->right->left->right = new Node(5);
    // root->right->left->right->right = new Node(5);
    replace_node_with_depth(root, k);
    print_PreOrder(root);
}