/* we want to print the greatest common
divider of 2 numbers
the brute force approach is we find the
smallest number between these 2 .

and then create a for loop that goes from last
to 1.and check for which value of i divide 2 variable.



#include <iostream>
using namespace std;
int common_divider(int a, int b)
{
    int low=min(a,b);
    for (int i = low; i > 0; i--)
    {
        if (a % i == 0 && b % i == 0)
        {
            return i;
            break;
        }
    }
}
int main()
{
    int a, b;
    cout << "enter two number: \n";
    cin >> a >> b;

    cout << common_divider(a, b);

    return 0;
}


#include <iostream>
using namespace std;
int common_divider(int a, int b)
{
   while(a!=b){
       if(a>b){
           a=a-b;
       }
       else{
           b=b-a;
       }
   }
   return a;
}
int main()
{
    int a, b;
    cout << "enter two number: \n";
    cin >> a >> b;

    cout << common_divider(a, b);

    return 0;
}
*/
#include <iostream>
using namespace std;
int common_divider(int a, int b)
{
    if(b==0){
        return a;
    }
   
   common_divider(b,a%b);
}
int main()
{
    int a, b;
    cout << "enter two number: \n";
    cin >> a >> b;

    cout << common_divider(a, b);

    return 0;
}