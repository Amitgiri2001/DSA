// basic c++ program for understanding oops concepts

#include <iostream>
using namespace std;
//create a class----
class semester {
    // create some private data members-----------
    private :
     int fees;
     string difficult_sub;
     public:
     string easy_sub;
     // create an public function--------------
      void sem(){
          cout<<"Your semester fees is : "<<fees<<endl;
          cout<<"Your semester difficult subject is : "<< difficult_sub<<endl;
          cout<<"Your semester Easy subject is : "<< easy_sub<<endl;
      }

      //create a constructor ---------
      semester(int x,string y,string z){
          fees=x;
          difficult_sub=y;
          easy_sub=z;

      }
};
int main()
{
    //createing an object and assign value with this objet using constructor...
    semester cse(2000,"logic gate","math");
    //print the public function
    cse.sem();
    //access the public variable and change it...
     cse.easy_sub="english";
    cout<<cse.easy_sub;
    //print the public function
    cout<<endl<<endl;
    cse.sem();
 
    return 0;
}