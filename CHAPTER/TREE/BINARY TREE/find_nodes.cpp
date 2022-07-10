// we want to findNode
// And also print all nodes in a range.
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
void range(Node *root, int k1, int k2)
{
    // Base case
    if (root == NULL)
    {
        return;
    }
    if (root->data >= k1 && root->data <= k2)
    {
        cout << root->data << " ";
    }

    // Calculation
    // if root data is smaller than the smallest value of rage
    // then we want to call only on the right side of the tree
    if (root->data < k1)
    {
        range(root->right, k1, k2);
    }
    // if root data is greater than the getter value of rage
    // then we want to call only on the left side of the tree
    else if(root->data > k2)
    {
        range(root->left, k1, k2);
    }
    // if all the case are wrong then call both side
    else{
        range(root->left, k1, k2);
        range(root->right, k1, k2);
    }

    // recursion
}
// using (binary search )like array TIME COMPLEXITY=O(hight of tree)   but in case of a well structure it is-O(log n); for bad structure it is O(n);
bool findNodeBetter(Node *root, int k)
{

    // Base Case
    if (root == NULL)
    {
        return false;
    }
    // Some Calculation
    if (root->data == k)
    {
        return true;
    }

    else if (root->data > k)
    {
        // REcursive call
        findNodeBetter(root->left, k);
    }
    else
    {
        // REcursive call
        findNodeBetter(root->right, k);
    }
}
// Time complexity=O(n).
bool findNode(Node *root, int k)
{

    // Base Case
    if (root == NULL)
    {
        return false;
    }
    // Some Calculation
    if (root->data == k)
    {
        return true;
    }
    // REcursive call
    return (findNode(root->left, k) || findNode(root->right, k));
}
int main()
{
    int k;
    cout << "Enter the value of k: ";
    cin >> k;

    Node *root = new Node(4);
    root->left = new Node(2);
    root->right = new Node(6);
    root->left->right = new Node(3);
    root->left->left = new Node(1);
    root->right->right = new Node(10);
    root->right->left = new Node(5);
   
    cout << findNodeBetter(root, k);
    range(root,4,33);
}