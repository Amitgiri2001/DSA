// basic concepts of constructor

#include <iostream>
using namespace std;
class student
{
public:
    student()
    {
        cout << "default" << endl;
    }
    student(int x)
    {
        cout << "personalized" << endl;
    }
};
class Main
{
    student s1;

public:
    Main() : s1(12)
    {
        //  s1=student(55);
    }
};

int main()
{
    Main s;
    // that output is equal to default then personalized

    //    after comment the output is only persolalized
    return 0;
}