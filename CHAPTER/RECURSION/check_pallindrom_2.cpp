

#include <iostream>
using namespace std;
bool check_pallindrom(string s, int i, int j)
{
    // Base case
    if (i >= j)
    {
        return true;
    }
    // Some calculation
    bool ans;
    if (s[i] == s[j])
    {
        ans = true;
    }
    else{
        ans=false;
    }
    // Recursive call
    return ans & check_pallindrom(s, i + 1, j - 1);
}
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    int i = 0;
    int j = s.size() - 1;
    cout << check_pallindrom(s, i, j);

    return 0;
}