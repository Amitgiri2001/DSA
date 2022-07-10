// we are going to return a vector contain only unique element

#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

// function
vector<int> printUnique(int arr[], int n )
{
    vector<int> v;
    unordered_map<int, int> um;
    for (int i = 0; i < n; i++)
    {

        if (um.find(arr[i]) == um.end())
        {
            v.push_back(arr[i]);
        }
            um[arr[i]]++;
    }
    return v;

}

int main()
{
    // cout<<"Hii coders!";
    int arr[] = {1, 5, 3, 2, 3, 1, 1, 7};

    

    vector<int> v=printUnique(arr, 8);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    return 0;
}