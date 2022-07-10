// balanced_bracket means ((())) this is balanced.
// but ((()) this is not balanced.



#include <iostream>
#include<stack>
using namespace std;
bool balanced_bracket(string s){
    stack<char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]!=')'){
            st.push(s[i]);

        }
        else{
            st.pop();
        }
    }
    if(st.empty()==true){
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    string s="((()))";
    cout<<balanced_bracket(s);

    

    return 0;
}