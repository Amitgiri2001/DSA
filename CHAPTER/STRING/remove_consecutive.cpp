

#include <iostream>
using namespace std;

void remove_consecutive(string s){
    string s1;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            continue;
        }
        else{
            s1+=s[i];
        }
    }
    cout<<s1<<endl;
}
int main()
{
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    remove_consecutive(s);

    

    return 0;
}