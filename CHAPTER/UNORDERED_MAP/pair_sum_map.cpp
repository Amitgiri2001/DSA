// we need to find all pair sum of 0 in a array

#include <iostream>
#include <unordered_map>
using namespace std;

// We solve it using 2 time traversals the full array
// So total time complexity=O(n^2);
// But we do the same thing in O(n) time using Map
void pair_sum(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == 0)
            {
                if (arr[i] < arr[j])
                {
                    cout << arr[i] << " " << arr[j] << endl;
                }
                else
                {
                    cout << arr[j] << " " << arr[i] << endl;
                }
            }
        }
    }
}
void pair_sum2(int arr[], int n)
{
    unordered_map<int, int> umap;
    // First add all element of the array into this unordered_map
    for (int i = 0; i < n; i++)
    {
        if (umap.find(arr[i]) != umap.end())
        {
            umap[arr[i]]++;
        }
        else
        {
            umap[arr[i]] = 1;
        }
    }
    for (auto x : umap)
    {
        // for not repeating - and +
        if (x.first > 0)
        {
            // if find then calculate their frequency
            // And print them
            if (umap.find(-x.first) != umap.end())
            {
                int freq1 = umap[x.first];
                int freq2 = umap[-x.first];
                for (int j = 0; j < freq1 * freq2; j++)
                {
                    cout << -x.first << " " << x.first << endl;
                }
            }
        }
    }

    // check by printing this array
    // for(auto x:umap){
    //     cout<<x.first<<" "<<x.second<<endl;
    // }
}
int main()
{
    int arr[] = {-2, 3, 2, 6, 2, -2, -6};
    int n = 7;
    pair_sum2(arr, n);

    return 0;
}