#include <iostream>
using namespace std;
const int n = 6;

bool isSafe(int col,int row,int board[][n],int n){
    //check for upper vertical direction : if there is already placed any queen ar not
    int i=row-1;
    while(i>=0){
        if(board[i][col]==1){
            return false;
        }
        i--;
    }

    // check for upper left diagonal direction: if there is already placed any queen ar not

    i=row-1;
    int j=col-1;
    while(i>=0 && j>=0){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j--;

    }
    // check for upper right diagonal direction: if there is already placed any queen ar not

    i=row-1;
    j=col+1;
    while(i>=0 && j<n){
        if(board[i][j]==1){
            return false;
        }
        i--;
        j++;

    }
    return true;

}

void pathHelper(int row, int board[][n], int n)
{
    // Base case
    if (row == n)
    {
        // we get ths solution : because we complete all the rows
        // print this board
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << board[i][j] << " ";
            }
            cout<<endl;
        }
        cout<<"\n\n";
        return;
    }
    // if we don't get into this base case
    // check all column of this row and initialize it '1' if it's safe to place this queen
    int col=n;
    for(int i=0;i<col;i++){
        if(isSafe(i,row,board,n)){
            board[row][i]=1;
            pathHelper(row+1,board,n);
            // when backtracking we need to back it '0'
            board[row][i]=0;
        }
    }



}

void placeQueen(int board[][n], int n)
{
    //  pass the starting row and create another function
    pathHelper(0, board, n);
}

int main()
{
    
    int board[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            board[i][j] = 0;
        }
    }

    placeQueen(board, n);

    return 0;
}