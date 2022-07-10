

#include <iostream>
using namespace std;
string reverse_w(string s, int start, int end)
{
    string reverse = "";
    while (start < end)
    {
        reverse = s[start] + reverse;
        start++;
    }
    return reverse;
}
void reverse_word(string s)
{
    int prev = -1;
    string ans = "";
    int i;
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            ans += reverse_w(s, prev + 1, i)+" ";
            prev = i;
        }
    }
    ans += reverse_w(s, prev + 1, i)+ " ";
    cout << ans << endl;
}
int main()
{
    string s;
    cout << "Enter a string: " << endl;
    getline(cin, s);

    reverse_word(s);

    return 0;
}