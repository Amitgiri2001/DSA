

#include <iostream>
using namespace std;
void allPossiblePaths(int maze[][3], int path[][3], int i, int j,int n)
{
    // check cell validity
    if (i < 0 || j < 0 || i >= n || j >= n || path[i][j] == 1 || maze[i][j] == 0)
    {
        return ;
    }
    // update path array
    path[i][j]=1;
    // check it is destination or not
    if(i==n-1 && j==n-1){
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                cout<<path[r][c]<<" ";
            }
            cout<<endl;
        }
        cout<<"\n\n\n";
        path[i][j]=0;
        return ;
    }
    
    //top
    allPossiblePaths(maze,path,i-1,j,n);
    
    //right
    allPossiblePaths(maze,path,i,j+1,n);
     
    //bottom
    allPossiblePaths(maze,path,i+1,j,n);
    //left
    allPossiblePaths(maze,path,i,j-1,n);
    path[i][j]=0;
       
}
bool isPossible(int maze[][3], int path[][3], int i, int j,int n)
{
    // check validity
    if (i < 0 || j < 0 || i >= n || j >= n || path[i][j] == 1 || maze[i][j] == 0)
    {
        return false;
    }
    // update path array
    path[i][j]=1;
    // check it is destination or not
    if(i==n-1 && j==n-1){
        for(int r=0;r<n;r++){
            for(int c=0;c<n;c++){
                cout<<path[r][c]<<" ";
            }
            cout<<endl;
        }
        return true;
    }
    
    //top
    if(isPossible(maze,path,i-1,j,n)){
        return true;
    }
    //right
    if(isPossible(maze,path,i,j+1,n)){
        return true;
    }
    //bottom
    if(isPossible(maze,path,i+1,j,n)){
        return true;
    }
    //left
    if(isPossible(maze,path,i,j-1,n)){
        return true;
    }
}

// tesing

void solve(int A, int B) {
    int m=B+2;
    char temp[m][m];
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            temp[m][m]='X';
        }
    }
    
    char path[A][A];
    for(int i=0;i<A;i++){
        for(int j=0;j<A;j++){
            path[i+1][j+1]=temp[i][j];
        }
    }
    for(int i=0;i<A;i++){
        for(int j=0;j<A;j++){
            cout<<path[i][j]<<" ";
        }cout<<"\n\n";
    }
}
int main()
{
    int n = 3;
    int maze[][3] = {{1, 1, 0}, {1, 1, 0}, {1, 1, 1}};
    int path[][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    // allPossiblePaths(maze, path, 0, 0,3);


solve(5,1);
    return 0;
}