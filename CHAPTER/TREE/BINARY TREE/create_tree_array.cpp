// we want to  create a tree using array

#include <iostream>
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

Node *create_tree_using_array(int arr[], int start, int end )
{
    int mid = (start + end) / 2;
    // Node* root=new Node(arr[mid]);
    // Base case
    if (start>end)
    {
        return NULL;
    }
    Node* root=new Node(arr[mid]);

    // Recursive call
    Node *leftNode = create_tree_using_array(arr, start, mid - 1);
    Node *rightNode = create_tree_using_array(arr, mid + 1, end);
    // calculation
    root->left = leftNode;
    root->right = rightNode;
    return root;
}
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
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int start = 0;
    int end = 6;
    // int mid = (start + end) / 2; 
    // Node *root = new Node(arr[mid]);
    Node *newRoot = create_tree_using_array(arr, start, end);
    printLikeTree(newRoot);

    return 0;
}