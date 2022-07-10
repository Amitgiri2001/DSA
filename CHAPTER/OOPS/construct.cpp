// the use of constructor and discontructorF
#include <iostream>
using namespace std;
class test
{
public:
    test()
    {
        cout << "constructor" << endl;
    }
    ~test()
    {
        cout << "disconstructor" << endl;
    }
};

int main()
{
    {
        test t1;
    }
    test t;
    /* o/p- constructor
    disconstructor
    constructor
    disconstructor
    */
    return 0;
}