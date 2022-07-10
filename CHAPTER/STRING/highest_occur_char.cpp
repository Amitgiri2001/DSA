

#include <iostream>
#include<bits/stdc++.h>
using namespace std;
char highest_occur2(string s)
{
    unordered_map<int,int>um;
    for(int i=0;i<s.length();i++){
        um[s[i]]++;
    }
    int maxi=INT_MIN;
    int ans;
    for(int i=0;i<s.length();i++){
        if(um[s[i]]>maxi){
            maxi=um[s[i]];
            ans=s[i];
        }
    }

    return ans;

}
char highest_occur(string s)
{
    int arr[256]={0};
    for(int i=0;i<s.length();i++){
        arr[s[i]]++;
    }
    int maxi=INT_MIN;
    char ans;
    for(int i=0;i<s.length();i++){
        if(arr[s[i]]>maxi){
            maxi=arr[s[i]];
            ans=s[i];
        }
    }
    return ans;

}
int main()
{
    string s;
    cout << "Enter a string: ";
    cin >> s;

    cout << "The hight occuring character is: " << highest_occur(s)<<endl;
    cout << "The hight occuring character is: " << highest_occur2(s);

    return 0;
}