#include <iostream>
using namespace std;
string ans = "";
string pair_star(string s)
{
    // Base case
    if (s.length() == 0)
    {
        return "";
    }
    // Calculation
    if (s[0] == s[1])
    {
        ans += s[0];
        ans += "*";
    }
    else
    {
        ans += s[0];
    }
    // Recursive call
    string small = pair_star(s.substr(1));
    return ans ;
}
int main()
{
    string s;
    cout << "Enter your string: ";
    cin >> s;

    cout << pair_star(s) << endl;

    return 0;
}