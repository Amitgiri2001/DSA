// We need to sort one stack in accending order.
#include <iostream>
#include <stack>
using namespace std;

stack<int> sortStack(stack<int> &input)
{
    stack<int> tempStack;
    while (!input.empty())
    {
        int topEle = input.top();
        input.pop();
        while (!tempStack.empty() && topEle < tempStack.top())
        {
            input.push(tempStack.top());
            tempStack.pop();
        }
        tempStack.push(topEle);
    }
    while(!tempStack.empty())
    {
        input.push(tempStack.top());
        tempStack.pop();
    }
    return input;
}
int main()
{
    int arr[5] = {5,4,3,2,1};
    stack<int> s;
    for (int i = 0; i < 5; i++)
    {
        s.push(arr[i]);
    }
    stack<int> tempStack = sortStack(s);
    while (!tempStack.empty())
    {
        cout << tempStack.top() << " ";
        tempStack.pop();
    }

    return 0;
}