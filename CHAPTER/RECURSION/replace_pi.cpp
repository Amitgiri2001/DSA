// we want to replace pi with the value 3.14..
// if input string is "xpix" then we want to print "x3.14x"
// first of all we want to do solve this problem using brute force approach

#include <iostream>
#include<string.h>
using namespace std;
string replacePi(string s){
    string output;
    // Base case
    if(s.length()==0){
        return output;
    }
    // Recursive call
    string small=replacePi(s.substr(1));
    // Some calculation----
    if(s[0]=='p' && small[0]=='i'){
        output="3.14"+small.substr(1);
    }
    else{
        output=s[0]+small;
    }
    return output;
}
int main()
{
    string s="pipipi";
    cout<<replacePi(s);
// replace(s);
    return 0;
}