// Remove consecutive elements from a strings
// example: aaabbccaddd-----output=abcad

#include <iostream>
using namespace std;
void removeConsecutive(string s)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << s[i];
        }
    }
}

string remove(string s)
{
    // Base case
    if (s.length() == 0)
    {
        return "";
    }

    // Recursive call
    string small = remove(s.substr(1));
    // Calculation
    if (s[0] == small[0])
    {
        return small;
    }
    else
    {
        return s[0] + small;
    }
}
string ans;
string remove_rec_2(string s)
{
    // Base case
    if (s.length() == 0)
    {
        return "";
    }
    // Calculation
    if (s[0] != s[1])
    {
        ans += s[0];
    }
    // Recursive call
    string ans2 = remove_rec_2(s.substr(1));
    return ans;
}
int main()
{
    string s = "aaaabjdskf";
    removeConsecutive(s);
    cout << endl;
    cout << remove(s) << endl;
    cout << remove_rec_2(s);

    return 0;
}