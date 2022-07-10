// i want to convert a string to a number..
#include <iostream>
#include <math.h>
using namespace std;
int str_to_num2(string s)
{
    // Base case
    if (s.length() == 1)
    {
        return int(s[0] - '0');
    }

    // recursive Call
    int small = str_to_num2(s.substr(0, s.size() - 1));

    // Calculation
    int first = s[s.size() - 1] - '0';

    return (small * 10 + first);
}
int str_to_num(string s)
{
    int num = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int fchar = s[i] - '0';
        num = num * 10 + fchar;
    }
    return num;
}
int main()
{
    string s = "3564";
    cout << str_to_num2(s);

    return 0;
}