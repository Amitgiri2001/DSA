#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// const int N = 9;
#define N 4

bool isSafe(int i, int j, int x, int grid[N][N])
{

    // search in vertically and horizontally
    for (int m = 0; m < N; m++)
    {
        if (grid[m][j] == x || grid[i][m] == x)
        {
            return false;
        }
    }

    // search in a particular grid
    int s = sqrt(N);
    int rs = i - i % s;
    int cs = j - j % s;
    for (int p = 0; p < s; p++)
    {
        for (int q = 0; q < s; q++)
        {
            if (grid[rs + p][cs + q] == x)
            {
                return false;
            }
        }
    }

    // if anything not get triggered then return true;

    return true;
}

bool solve(int grid[N][N])
{

    // check first space in this grid
    int i, j;

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            if (grid[i][j] == 0)
            {
                break;
            }
        }
    }
    // base case
    if(i==N && j==N){
        return true;
    }

    // insert one number in this position
    for (int k = 1; k <= N; k++)
    {
        if (isSafe(i, j, k, grid))
        {
            grid[i][j] = k;
            if (solve(grid))
            {
                return true;
            }
            // for future backtracking
            
        }
        grid[i][j] = 0;
    }

    // if nothing will happen then return false;
    return false;
}

int main()
{
    int grid[N][N] = {{1, 0, 3, 4}, {0, 0, 2, 1}, {0, 1, 0, 2}, {2, 4, 0, 0}};

    if (solve(grid))
    {
        int i, j;
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                cout << grid[i][j] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}