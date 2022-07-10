// we are trying to count all zeros in the last of any trailing_zeros number...

// first we try to calculate the trailing_zeros of this number then try to module this number by 10----> while the output of this module is Zero----------> this is the brute force approach.....

/*
#include <iostream>
using namespace std;

int trailing_zeros(int n)
{
    // calculate the factorial value of this number----

    long long int fact = 1;

    while (n != 0)
    {
        fact = fact * n;
        n--;
    }

    // calculate the total zero's----->
    long long int num = fact;
    int count = 0;
    while (num %10== 0)
    {
        count++;
        num /= 10;
    }
    return count;
}

int main()
{
    int n;
    cout << "Please Enter a number : ";
    cin >> n;
    cout << trailing_zeros(n);

    return 0;
}
*/

/* Lets talk about the efficience method of this solution---->
we see that when 5 comes then 0 is also comes.
that means the (total number of '5' in this factorial) == (total no of trailing '0')

if num/5 is the answer of any factorial have total zero's.
examples-> 10/5= 2   --->then it has 2 trail '0'
           13/5= 2   --->then it has 2 trail '0'
           22/5= 4   --->then it has 4 trail '0'
but this logic not give the answer correctly when 25 comes---> because 25 itself has 2 '5'....25/5=5 but it has 6 '5'.

so we want to create one for loot for solve this problem--


int n=5;
int power=1;
while(num/n  >=5){
    power++;
    n=n*5;
}

at last we want to add(power-1) to our cout of trailing zeros...



examples-->25--->power=2,and 25/5=5  total=5+(2-1)==6(answer)
           625-->power=4,and 625/5=25  total=25+(4-1)==28(answer)


*/

#include <iostream>
using namespace std;

int trailing_zeros(int num)
{
    int num1 = num;
    int n = 5;
    int power = 1;
    while (num / n >= 5)
    {
        power++;
        n = n * 5;
    }

    int count = (num1 / 5) + (power - 1);

    return count;
}

int main()
{
    int n;
    cout << "Please Enter a number : ";
    cin >> n;
    cout << trailing_zeros(n);

    return 0;
}