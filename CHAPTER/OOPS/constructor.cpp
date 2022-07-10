// basic concepts of constructor

#include <iostream>
using namespace std;
class student
{
private:
    string school;

public:
    int id;
    int roll;
    string name;
    void print()
    {
        cout << "Your name is : " << name << " id " << id << " roll " << roll << endl;
    }
    
    student(string x, int y, int z):name(x),id(y),roll(z)
    {
        
        
    }
};
int main()
{
    string name;
    cout << "Please Enter your name: ";
    cin >> name;
    int id = 2, roll = 100;
    student  s2(name, id, roll); 
     s2.print();

     // using poienter
     student *ptr=new student("Amit Kumar",3,1000);
     ptr->print();

    return 0;
}