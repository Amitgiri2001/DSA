/* Check redundant brackets

For a given expression in the form of a string, find if there exist any redundant brackets or not. It is given that the expression contains only rounded brackets or parenthesis and the input expression will always be balanced.
A pair of the bracket is said to be redundant when a sub-expression is surrounded by unnecessary or needless brackets.
Example:
Expression: (a+b)+c
Since there are no needless brackets, hence, the output must be 'false'.

Expression: ((a+b))
The expression can be reduced to (a+b). Hence the expression has redundant brackets and the output will be 'true'.
Note:
You will not get a partial score for this problem. You will get marks only if all the test cases are passed.
Input Format :
The first and the only line of input contains a string expression, without any spaces in between.
Output Format :
The first and the only line of output will print either 'true' or 'false'(without the quotes) denoting whether the input expression contains redundant brackets or not.
Note:
You are not required to print the expected result. It has already been taken care of.
Constraints:
0 <= N <= 10^6
Where N is the length of the expression.

Time Limit: 1 second
Sample Input 1:
a+(b)+c
Sample Output 1:
true
Explanation:
The expression can be reduced to a+b+c. Hence, the brackets are redundant.
Sample Input 2:
(a+b)
Sample Output 2:
false
*/
#include <iostream>
#include <stack>
using namespace std;

bool redundant_bracket(string s)
{
    // if all bracket are not there
    if(s.size()%2!=0){
        return false;
    }

    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ')')
        {
            st.push(s[i]);
            // cout<<st.top()<<" ";
        }
        else
        {
            if (st.top() == '(')
            {
                return true;
            }
            while (st.top() != '(')
            {
                st.pop();
                // cout<<st.top()<<" ";
            }
            st.pop();
        }
        
        // cout<<st.top()<<" ";
    }
    return false;
}
int main()
{
    string s = "(((a+b)+c))";
    cout << redundant_bracket(s);
    return 0;
}