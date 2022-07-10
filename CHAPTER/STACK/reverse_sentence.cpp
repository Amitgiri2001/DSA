

#include <iostream>
using namespace std;
#include <stack>

void reverse_sentence(string s)
{
    stack<string> st;
    for (int i = 0; i < s.length(); i++)
    {

        string word = "";
        while (s[i] != ' ' && i != s.length())
        {
            word = word + s[i];
            i++;
        }
        st.push(word);
    }
    while (st.empty() != true)
    {
        cout << st.top()<<" ";
        st.pop();
    }
}
int main()
{
    string s = "My, name is Amit.";
    reverse_sentence(s);

    return 0;
}