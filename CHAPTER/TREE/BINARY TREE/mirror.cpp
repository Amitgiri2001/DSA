// we want to create a tree like as a mirror of that
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
void mirror(Node* root){
    // Base Case
    if(root==NULL){
        return ;
    }

    // Some Calculation
    Node* leftLink=root->left;
    Node* rightLink=root->right;
// reverse two link of root
    Node* temp=leftLink;
    root->left=rightLink;
    root->right=temp;
    // Recursive Call
    mirror(root->left);
    mirror(root->right);
}
int main()
{
    Node* root=new Node(1);
    root->left=new Node(2);
    root->right=new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    printLikeTree(root);
    cout<<"\n\n";
    mirror(root);
    printLikeTree(root);


    return 0;
}