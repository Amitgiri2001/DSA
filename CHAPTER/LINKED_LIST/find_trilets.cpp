#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
    /* data */
};

int triplet(Node *head, int val)
{
    int answer = 0;
    Node *curr = head;
    int total = 0;
    while (curr)
    {
        total++;
        curr = curr->next;
    }
    Node *temp1 = head;

    while (temp1)
    {
        Node *temp2 = temp1->next;
        while (temp2)
        {

            Node *temp3 = temp2->next;
            while (temp3)
            {

                if (temp1->data + temp2->data + temp3->data == val)
                {
                    answer++;
                }

                temp3 = temp3->next;
            }

            temp2 = temp2->next;
        }

        temp1 = temp1->next;
    }
    return answer;
}

int main()
{
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(4);
    head->next->next->next = new Node(5);
    head->next->next->next->next = new Node(6);
    head->next->next->next->next->next = new Node(8);
    head->next->next->next->next->next->next = new Node(9);
    int value = 17;
    cout << triplet(head, value);

    return 0;
}