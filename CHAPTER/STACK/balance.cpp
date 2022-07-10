

#include <iostream>
#include <stack>
using namespace std;

bool check(char a, char b)
{
    return ((a == ')' && b == '(') || (a == '}' && b == '{') || (a == ']' && b == '['));
}
bool isBalanced(string str)
{
    stack<int> s;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
        {
            s.push(str[i]);
        }
        else
        {
            if (s.empty() == true)
            {
                return false;
            }
            else if (check(str[i], s.top()) == false)
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
        
    }
    if (s.empty() == true)
        {
            return true;
        }
        else{
            return false;
        }
}

int main()
{
    string str;
    cout<<"please enter a string"<<endl;
    cin >> str;
    if(isBalanced(str)==true) {
        cout<<"It is a balanced parenthesis"<<endl;
    }
    else{
        cout<<"It is not a balanced parenthesis"<<endl;

    }

    return 0;
}
