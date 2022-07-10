// We are try to write down the code for basic queue functions.by using array.

#include <iostream>
using namespace std;
class basic_queue
{
private:
    int *arr;
    int front; // it is the index of the queue front.
    int rear;  // it is the index of the queue rear.
    int size; //size of the array .inicilized it with 0.
    int arr_size; // size of the queue.

    // when the array size is full then call this double size function 
    // we dont give the capacity full expection.
    void doubleCapacity()
    { 
        // copy all array element int this temporary array
        int temp[arr_size];
        for (int i = 0; i < arr_size; i++)
        {
            temp[i] = arr[i];
        }
        // then double the array size
        arr = new int[2 * arr_size];
        int index = 0;
        // paste all the array elements after front
        for (int i = front; i < arr_size; i++)
        {
            arr[index++] = temp[i];
        }
        // paste all the array elements before front
        for (int j = 0; j < front - 1; j++)
        {
            arr[index++] = temp[j];
        }
        front = 0;
        rear = arr_size - 1;
        arr_size = 2 * arr_size;
    }
    /* data */
public:
    basic_queue(int args)
    {
        arr = new int[args];
        arr_size = args;
        front = -1;
        rear = -1;
        size = 0;
    }

    void enQueue(int ele)
    { 
        // when size of this queue is equal to the array then double the size
        if (size == arr_size)
        {
            cout << "The Queue is full" << endl;
            doubleCapacity();
        }
        // if size of this queue is '0' then initialize front =0

        if (size == 0)
        {
            front = 0;
        }
// for create circular queue
        rear = (rear + 1) % arr_size;
        size++;
        arr[rear] = ele;
    }
    int deQueue()
    {
        if (size == 0)
        {
            cout << "The Queue is Already Empty" << endl;
            size = 0;
            return 0;
        }
        int temp = arr[front];
        // front = front + 1;
        // if (front == arr_size)
        // {
        //     front = 0;
        // } // we do it for circular queue...
        front = (front + 1) % arr_size;
        size = size - 1;
        if (size == 0)
        {

            front = -1;
            rear = -1;
        }

        return temp;
    }
    int Front()
    {
        return arr[front];
    }
    bool isEmpty()
    {
        if (size == 0)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int Size()
    {
        return size;
    }
};

int main()
{
    basic_queue q(4);
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    cout << q.deQueue() << endl;
    q.enQueue(4);
    q.enQueue(5);
    cout << q.Size() << endl;
    while (!q.isEmpty())
    {
        cout << q.deQueue() << " ";
    }
    cout << endl;
    cout << q.Size() << endl;
    
        int array[7] = {1, 2, 3, 4,5,6,7};
        for (int ele : array)
        {
            q.enQueue(ele);
        }
        cout<<q.Size()<<endl;
        while (q.isEmpty() != true)
        {
            cout << q.deQueue() << " ";
        }
    

    /*
        q.enQueue(2);
        q.enQueue(5);
        cout<<q.deQueue()<<endl;
        q.enQueue(3);
        q.enQueue(7);
        q.enQueue(6);
        cout<<q.Front()<<endl;

        */

    return 0;
}