// Basic Implimentation of Stack
// push() , pop(), empty(), top() function write

#include <iostream>
using namespace std;
#define n 4
class basic_stack
{
private:
// Dynamic Memory Allocation
    int* arr;
    int top;
    void double_size(){
        int new_arr[2*n];
        for(int i=0;i<n;i++){
            new_arr[i]=arr[i];
        }
    }

    /* data */
public:
// Create One Constractor
    basic_stack()
    {
        arr = new int[n];
        top = -1;
    }
    void push(int x)
    {
        if (top == n - 1)
        {
            double_size();
        }
        top++;
        arr[top] = x;
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        return arr[top];
    }
    bool Empty()
    {
        if (top == -1)
        {

            return true;
        }
        return false;
    }
};

int main()
{
    basic_stack st;
    st.push(2);
    st.push(20);
    st.push(200);
    cout << st.Top() << " ";
    cout << st.Empty() << " ";
    st.push(2000);
    st.push(22);
    st.pop();
    cout << st.Top() << " ";
    st.pop();
    cout << st.Top() << " ";
    st.pop();
    cout<<st.Empty();

    return 0;
}