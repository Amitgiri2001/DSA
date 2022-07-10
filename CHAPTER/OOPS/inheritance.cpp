// basic concepts of constructor

#include <iostream>
using namespace std;
class ideal
{
protected:
    int id = 1;
    string name = "Amit Kumar";
};
class student : public ideal
{
private:
    string school;

public:
    int roll = 100;
    void print()
    {
        cout << "your name is " << name << " id is " << id << " roll is " << roll << endl;
    }
};
int main()
{
    student s1;
    s1.print();

    return 0;
}