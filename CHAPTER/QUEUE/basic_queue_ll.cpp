

#include <iostream>
using namespace std;
// create a structure of node--------
struct Node
{
    int data;
    Node *next; // here node use for the data type
                // create a constructor
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};
class basic_queue_ll
{
private:
    Node *front;
    Node *rare;
    int size;

    /* data */
public:
    basic_queue_ll()
    {
        front = NULL;
        rare = NULL;
        size = 0;
    }
    void enQueue(int ele)
    {
        Node *newNode = new Node(ele);
        if (front == NULL)
        {
            front = newNode;
            rare = newNode;
            // cout<<head->data<<" ";
        }
        rare->next = newNode;
        rare = newNode;
        size++;
    }
    int deQueue()
    {
        int temp = front->data;
        if(front==NULL){
            cout<<"the queue is already empty.";
        }
        if (front->next == NULL)
        {
            front = NULL;
            rare = NULL;
            return temp;
        }
        front = front->next;
        size--;
        return temp;
    }
    int Front()
    {
        return front->data;
    }
    bool isEmpty()
    {
        return front == NULL;
    }
    int Size()
    {
        return size;
    }
};

int main()
{
    basic_queue_ll q;
    q.enQueue(4);
    q.enQueue(42);
    q.enQueue(14);
    cout << q.Size() << endl;
    cout << q.deQueue() << " ";
    cout << q.isEmpty() << endl;
    cout << q.Front() << endl;
    cout << q.deQueue() << " ";
    cout << q.deQueue() << " ";
    cout << q.isEmpty() << endl;

    return 0;
}