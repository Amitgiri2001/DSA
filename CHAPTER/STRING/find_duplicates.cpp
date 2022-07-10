#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void find_duplicates(string s){
    int arr[256]={0};
    for(int i=0;i<s.length();i++){
        arr[s[i]]++;
    }
    for(int i=0;i<256;i++){
        if(arr[i]>1 && char(i) !=' ' ){
            cout<<char(i)<<" "<<arr[i]<<endl;
        }
        // else{
        //     cout<<s[i]<<" "<<arr[s[i]];
        // }
    }
}

int main(){
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);

    find_duplicates(s);
    

    return 0;
}