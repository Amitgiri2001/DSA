

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct MyHash
{
    // size of the table
    int Bucket;
    // create one (Array of link lists) table of link lists
    list<int> *table;
    // create one constructor
    MyHash(int size)
    {
        Bucket = size;
        table = new list<int>[Bucket];
    }
    int hash(int key)
    {
        return (key % Bucket);
    }

    bool search(int key)
    {
        int i = hash(key);
        for (auto x : table[i])
        {
            if (x == key)
            {
                return true;
            }
        }
        return false;
    }

    void insert(int key)
    {
        int i = hash(key);
        table[i].push_back(key);
    }
    void Delete(int key)
    {
        int i = hash(key);
        table[i].remove(key);
    }
};
int main()
{
    MyHash mh(7);
    mh.insert(16);
    mh.insert(15);
    mh.insert(23);
    cout << mh.search(15) << " ";
    cout << mh.search(23) << " ";
    mh.Delete(23);
    cout << mh.search(23) << " ";
    cout << mh.table << endl;
    cout << mh.hash(16) << " " << mh.hash(23);

    return 0;
}