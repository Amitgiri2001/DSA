#include <stdio.h>
#include <stdlib.h>
void insert(int);
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *root;
void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}
struct node *minValueNode(struct node *node)
{
    struct node *current = node;

    while (current->left != NULL)
        current = current->left;
    return current;
}

struct node *delete_node(struct node *root, int data)
{
    if (root == NULL)
        return root;

    if (data < root->data)
        root->left = delete_node(root->left, data);

    else if (data > root->data)
        root->right = delete_node(root->right, data);
    else
    {

        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        struct node *temp = minValueNode(root->right);

        root->data = temp->data;

        root->right = delete_node(root->right, temp->data);
    }
    return root;
}

void main()
{
    int choice, item;
    do
    {
        printf("\nEnter the item which you want to insert?\n");
        scanf("%d", &item);
        insert(item);
        printf("\nPress 0 to insert more and except 0 anything to start the deletion\n");
        scanf("%d", &choice);
    } while (choice == 0);
    int choice2, item2;
    do
    {
        printf("\nEnter the item which you want to delete?\n");
        scanf("%d", &item2);
        delete_node(root, item2);
        inorder(root);
        printf("\nPress 0 to delete more ?\n");
        scanf("%d", &choice);
    } while (choice == 0);
}
void insert(int item)
{
    struct node *ptr, *parentptr, *nodeptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("can't insert");
    }
    else
    {
        ptr->data = item;
        ptr->left = NULL;
        ptr->right = NULL;
        if (root == NULL)
        {
            root = ptr;
            root->left = NULL;
            root->right = NULL;
        }
        else
        {
            parentptr = NULL;
            nodeptr = root;
            while (nodeptr != NULL)
            {
                parentptr = nodeptr;
                if (item < nodeptr->data)
                {
                    nodeptr = nodeptr->left;
                }
                else
                {
                    nodeptr = nodeptr->right;
                }
            }
            if (item < parentptr->data)
            {
                parentptr->left = ptr;
            }
            else
            {
                parentptr->right = ptr;
            }
        }
        printf("Node Inserted\n");
    }
    printf("PrintedList\n");
    inorder(root);
}