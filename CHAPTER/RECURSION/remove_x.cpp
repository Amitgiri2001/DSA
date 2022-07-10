
#include <iostream>
#include <string.h>
using namespace std;
void replace(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'a')
        {
            s[i] = 'x';
        }
    }
    cout << s;
}

string remove_x(string s)
{
    string output;
    // Base case
    if (s.length() == 0)
    {
        return "";
    }
    if (s[0] == 'x')
    {
        return ("" + remove_x(s.substr(1)));
    }
    // Recursive call
    return (s[0] + remove_x(s.substr(1)));
}
int main()
{
    string s = "xxxxxh";
  
    cout << remove_x(s);
    return 0;
}