// C++ program to print all possible
// substrings of a given string

#include <bits/stdc++.h>
using namespace std;

// Function to print all sub strings
void subString(char str[], int n)
{
    // Pick starting point
    for (int len = 0; len < n; len++)
    {
        // Pick ending point
        string temp = "";
        for (int i = len; i < n; i++)
        {
            temp += str[i];
            cout << temp;
            cout << endl;
        }
    }
}

// Driver program to test above function
int main()
{
    char str[] = "abc";
    subString(str, strlen(str));
    return 0;
}
