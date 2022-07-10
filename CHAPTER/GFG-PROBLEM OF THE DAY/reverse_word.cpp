/*Reverse words in a given string 

Given a String S, reverse the string without reversing its individual words. Words are separated by dots.

Example 1:

Input:
S = i.like.this.program.very.much
Output: much.very.program.this.like.i
Explanation: After reversing the whole
string(not individual words), the input
string becomes
much.very.program.this.like.i
 */
class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
   { 
       // code here 
       int n=S.length();
       string res;
       stack<string> st;
       string s="";
       string temp;
       for(int i=0;i<n;i++){
           if(S[i]!='.')
               s+=S[i];
           else{
               st.push(s);
               s="";
           }
       }
       st.push(s);
       while(!st.empty()){
           temp=st.top();
           res+=temp+".";
           st.pop();
       }
       res.pop_back();
       return res;
   } 
};