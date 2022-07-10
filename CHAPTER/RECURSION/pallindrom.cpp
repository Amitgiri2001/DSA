// check a string is a pallindrom or not using recursion

#include <iostream>
using namespace std;
bool isPallindrom(string s, int low, int high)
{
    // base case
    if (low >= high)
    {
        return true;
    }
    if (s[low] != s[high])
    {
        return false;
    }

    // Recursive call
    return isPallindrom(s, low+1, high-1);
}
int main()
{
    string s;
    cout << "Enter the string: ";
    cin >> s;
    // int len = s.size();
    bool ans = isPallindrom(s, 0, s.length()-1);
    cout << "The answer is :" << ans;

    return 0;
}
