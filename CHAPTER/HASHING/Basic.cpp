// hashing basic all function

#include <iostream>
#include<unordered_set> // for using this header file
using namespace std;
int main()
{
    unordered_set<int>s;
    // insert all element using insert function
    s.insert(5);
    s.insert(10);
    s.insert(15);
    // using find function 
    if(s.find(11)==s.end()){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    // using begin() to print set
    for (auto it = s.begin(); it !=s.end(); ++it){
        cout << ' ' << *it;
    }
    cout<<endl;
    cout<<s.size()<<endl;
    s.erase(10);
    if(s.find(10)==s.end()){
        cout<<"Not Found"<<endl;
    }
    else{
        cout<<"Found"<<endl;
    }
    cout<<s.count(5)<<endl;


    


    

    return 0;
}