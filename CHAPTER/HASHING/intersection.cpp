
#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> s;
    int a[] = {2, 0, 3, 2};
    int b[] = {6, 2, 3, 0};

    int n = 4;

    for (int i = 0; i < n; i++)
    {
        s.insert(a[i]);
    }
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        if (s.count(b[i]) == 1)
        {
            res++;
        }
    }
    cout << res;

    return 0;
}