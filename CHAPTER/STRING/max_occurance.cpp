// We want to find the maximum occurrence of an alphabet in a string

#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;

// It's time complexity is is O(log n)
void occurrance(string s)
{
    // sort the string
    sort(s.begin(), s.end());
    int max_count = 0;
    char main_word;
    int count = 1;
    char word;
    for (int i = 0; i < s.length(); i++)
    {
        word = s[i];
        // let's check if next word is same or not.if same then increase the value of count. Else set count =1 again.
        if (s[i] == s[i + 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        // check if count is greater than max_count.
        if (count > max_count)
        {
            max_count = count;
            main_word = word;
        }
    }
    cout << "the maximum occurrence of an alphabet is: " << main_word << " And its number is: " << max_count;
}
// lets solve it in O(n) time complexity
void betterApproach(string s)
{
    // Make an array here every element is initially 0
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        // update value .and increase by 1.
        arr[s[i] - 'a']++;
    }
    int max_count = 0;
    char word;
    // print this array
    //  for(int i=0;i<26;i++){
    //     cout<<arr[i]<<" ";
    // }
    for (int i = 0; i < s.length(); i++)
    {
        int count = arr[i];
        if (count > max_count)
        {
            max_count = count;
            word = s[i];
        }
    }
    cout << "the maximum occurrence of an alphabet is: " << word << " And its number is: " << max_count;
}

int main()
{
    string s = "bacccdbbac";
    // occurrance(s);
    betterApproach(s);

    return 0;
}