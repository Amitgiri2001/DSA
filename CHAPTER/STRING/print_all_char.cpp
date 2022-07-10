

#include <iostream>
using namespace std;
int main()
{
    string s;
    cout << "Enter your name: " << endl;
    // cin>>s;
    getline(cin, s);
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != ' ')
        {
            cout << s[i] << " ";
        }
    }

    return 0;
}