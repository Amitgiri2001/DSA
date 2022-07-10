#include<stdio.h> 
#include<stdlib.h> 
void create(int); 
struct node 
{ 
    int data; 
    struct node *next; 
}; 
struct node *head; 
 
void display(){ 
struct node *current = head; 
 
    if(head == NULL) { 
        printf("List is empty\n"); 
        return; 
    } 
    printf("Nodes of linked list: \n"); 
    while(current != NULL) { 
        //Prints each node by incrementing pointer 
        printf("%d ", current->data); 
        current = current->next; 
    } 
 
} 
void reverse(){ 
  struct node* current = head; 
        struct node *prev = NULL; 
        struct node *next = NULL; 
 
        while (current != NULL) { 
            // Store next 
            next = current->next; 
 
            // Reverse current node's pointer 
            current->next = prev; 
 
            // Move pointers one position ahead. 
            prev = current; 
            current = next; 
 
        } 
        head = prev; 
 
display(); 
} 
void main () 
{ 
    int choice,item; 
    do 
    { 
        printf("\nEnter the item which you want to insert?\n"); 
        scanf("%d",&item); 
        create(item); 
        printf("\nPress 1 to create a node or press any integer except 1 to reverse the linked list\n"); 
        scanf("%d",&choice); 
    }while(choice == 1); 
 
printf("\n now we are going to reverse the linked list\n"); 
 
reverse(); 
    printf("\n"); 
 
 
 
} 
void create(int item) 
    { 
        struct node ptr = (struct node)malloc(sizeof(struct node)); 
        struct node *temp; 
         if(ptr == NULL) 
        { 
            printf("\nOVERFLOW"); 
        } 
        else 
        { 
            ptr->data = item; 
            if(head == NULL) 
            { 
                ptr -> next = NULL; 
                head = ptr; 
                printf("\nFirst Node Created"); 
            } 
            else 
            { 
                temp = head; 
                while (temp -> next != NULL) 
                { 
                    temp = temp -> next; 
                } 
                temp->next = ptr; 
                ptr->next = NULL; 
                printf("\n New Node Created"); 
 
            } 
        } 
        display(); 
    }