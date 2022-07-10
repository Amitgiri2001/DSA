// Here we learn about basic things in unordered map

#include <iostream>
#include <list>
#include <unordered_map>
using namespace std;
void mapping()
{
    unordered_map<string, int> umap;
    // insert something
    // 1st way---
    umap["hi"] = 2;
    umap["hello"] = 3;
    umap["hellow"] = 3;
    // 2nd way
    umap.insert(make_pair("how", 6));
    // print map--
    //    1st way

    for (auto x : umap)
    {
        cout << x.first << " " << x.second << endl;
    }
    // 2nd way
    unordered_map<string, int>::iterator itr;
    for (itr = umap.begin(); itr != umap.end(); itr++)
    {
        cout << itr->first << " " << itr->second << endl;
    }

    // find Something
    string key = "hi";
    if (umap.find(key) == umap.end())
    {
        cout << " Not Found";
    }
    else
    {
        cout << "Found" << endl;
    }

    cout << umap.size();
    cout << umap.max_size();
}
// we want to remove duplicates from an array
void removeDuplicates(int arr[], int n)
{
    unordered_map<int, bool> umap;
    list<int> li;

    for (int i = 0; i < n; i++)
    {
        // first check if map contain this element or nat
        // if contain then move to the next element
        if (umap.count(arr[i]))
        {
            continue;
        }

        // if dont contain then put this element into our list
        else
        {
            li.push_back(arr[i]);

            umap.insert(make_pair(arr[i], true));
        }
    }
    while(!li.empty())
    {
        cout << li.front() << " ";
        li.pop_front();
    }
}

int main()
{
    // mapping();
    int n = 8;
    int arr[] = {1, 3, 2, 2, 5, 3, 6, 7};
    removeDuplicates(arr, n);
    // for (int i = 0; i < li.size(); i++)
    // {
    //     cout<<"\n\n\n"<<li.size();
    //     cout << li.front() << " ";
    //     li.pop_front();
    // }

    return 0;
}