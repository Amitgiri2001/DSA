
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string compress_string(string s)
{
    int arr[256] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i]]++;
    }
    int maxi = INT_MIN;
    string ans;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[i + 1])
        {
            ans += s[i];
            if (arr[s[i]] > 1)
            {
                ans += 48 + (arr[s[i]]);
            }
        }
    }
    return ans;
}
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;
    cout << "The new compressed string is: : " << compress_string(s) << endl;
    return 0;
}


