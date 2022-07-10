

#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;
void reverse_string2(string s)
{
    int i = 0;
    int j = s.length()-1;
    bool flag = true;
    while (i < j)
    {
        if (s[i] != s[j])
        {
            flag = false;
        }
        i++;
        j--;
    }
    if (flag == true)
    {
        cout << "They are pallendrom";
    }
    else
    {
        cout << "They are not pallendrom";
    }
}
void reverse_string(string s)
{
    string s2 = s;
    reverse(s.begin(), s.end());
    if (s2 == s)
    {
        cout << "Both are same." << endl;
    }
    else
    {
        cout << "Both are not same." << endl;
    }
    cout << s2 << " " << s << endl;
}
int main()
{
    string s;
    cout << "Enter your name: " << endl;
    // cin>>s;
    getline(cin, s);
    reverse_string(s);
    reverse_string2(s);

    return 0;
}