// Here we want to check if a tree is balanced or not
// Balanced means that is the tree's | left side hight -right side hight |<=1;
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
class Balanced
{
public:
    int hight;
    bool isBal;
    /* data */
};

int hightOfATree(Node *root)
{

    // Base Case
    if (root == NULL)
    {
        return 0;
    }

    // REcursive call
    int leftHight = hightOfATree(root->left);
    int rightHight = hightOfATree(root->right);
    // Some Calculation
    if (leftHight > rightHight)
    {
        return (1 + leftHight);
    }
    else
    {
        return (1 + rightHight);
    }
}
// this function return two variable .so return type is different
Balanced isBalancedBetter(Node *root)
{
    // Base Case
    if (root == NULL)
    {
        int hight = 0;
        bool balance = true;
        // create an object of this class
        Balanced ans;
        ans.hight = hight;
        ans.isBal = balance;
        return ans;
    }
    // Recursive call
    Balanced lOutput = isBalancedBetter(root->left);
    Balanced rOutput = isBalancedBetter(root->right);
    // calculation
    bool balance = true;
    int hight = max(lOutput.hight, rOutput.hight) + 1;
    if (abs(lOutput.hight - rOutput.hight) > 1)
    {
        balance = false;
    }
    if (!lOutput.isBal || !rOutput.isBal)
    {
        balance = false;
    }
    Balanced Answer;
    Answer.hight = hight;
    Answer.isBal = balance;
    return Answer;
}
bool isBalanced(Node *root)
{
    // Base Case
    if (root == NULL)
    {
        return true;
    }

    // Calculation
    int lh = hightOfATree(root->left);  // calculate left side hight of this root
    int rh = hightOfATree(root->right); // calculate right side hight of this root
    if (abs(lh - rh) > 1)
    {
        return false;
    }
    // Recursion call
    bool isLeftBalanced = isBalanced(root->left);
    bool isRightBalanced = isBalanced(root->right);
    return isLeftBalanced && isRightBalanced;
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
    // we want to return only second part of this class.
    cout << isBalancedBetter(root).isBal;

    return 0;
}