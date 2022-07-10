// we want to replace pi with the value 3.14..
// if input string is "xpix" then we want to print "x3.14x"
// first of all we want to do solve this problem using brute force approach

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

string replace_x_recursive(string s)
{
    string output;
    // Base case
    if (s.length() == 0)
    {
        return "";
    }
    if (s[0] == 'a')
    {
        return ("x" + replace_x_recursive(s.substr(1)));
    }
    // Recursive call
    return (s[0] + replace_x_recursive(s.substr(1)));
}
int main()
{
    string s = "aaaab";
    cout << s << endl;
    // cout<<replace_x_recursive(s);
    replace(s);
    cout<<endl;
    cout << replace_x_recursive(s);
    return 0;
}