// in this file we want to implement new data structure that is binary tree .
// And it is a like a link list but here we have two links they are left and right

#include <bits/stdc++.h>
using namespace std;
int i=1;
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
// Takeing all data from the user.
struct Node *newNode()
{
    // Node *main = root;
    // For only one time print this statement
    
    if (i == 1)
    {
        cout << "Enter the root node value: ";
        i++;
    }
    int val;
    cin >> val;
    // Base case
    if (val == -1)
    {
        return NULL;
    }
    // Some Calculation
    Node *root = new Node(val);
    // Recursively call
    cout << "Enter the left child of " << root->data << ": ";
    Node *leftNode = newNode();
    root->left = leftNode;
    cout << "Enter the right child of " << root->data << ": ";
    Node *rightNode = newNode();
    root->right = rightNode;
    return root;
}
// Takeing all data from the user.in Better way
struct Node *newNodeBetter(bool isRoot)
{
    // For only one time print this statement
    if (isRoot==true)
    {
        cout << "Enter the root node value: ";
     
    }
    int val;
    cin >> val;
    // Base case
    if (val == -1)
    {
        return NULL;
    }
    // Some Calculation
    Node *root = new Node(val);
    // Recursively call
    cout << "Enter the left child of " << root->data << ": ";
    Node *leftNode = newNodeBetter(false);
    root->left = leftNode;
    cout << "Enter the right child of " << root->data << ": ";
    Node *rightNode = newNodeBetter(false);
    root->right = rightNode;
    return root;
}

// we want to print tree as a tree structure.
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
void print(Node *root)
{
    // Base case
    if (root == NULL)
    {
        return;
    }
    // Some Dos
    cout << root->data << " ";

    // Recursive call
    print(root->left);
    print(root->right);
}
int main()
{
    /*
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    */
    Node *root = newNodeBetter(true);
    printLikeTree(root);

    return 0;
}