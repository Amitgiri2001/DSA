// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{
    
    public:
    int Maximum_Sum(vector<vector<int>> &mat,int N,int K){
        // Your code goes here 
        // Create Another array of size N+1
        
        int ans[N+1][N+1];
        int mx=INT_MIN;
        for(int i=0;i<=N;i++){
            for(int j=0;j<=N;j++){
                // First row and first col of this Array is defined as 0;
                
                if(i==0 || j==0){
                    ans[i][j]=0;
                }
                // Another Array element is defined by a perticular way.
                
                else{
                    ans[i][j]=(ans[i][j-1]+ans[i-1][j]+mat[i-1][j-1])-ans[i-1][j-1];
                    
                }
                // create Max in a perticular way...
                if(i>=K && j>=K){
                    mx=max(ans[i][j]-(ans[i][j-K]+ans[i-K][j]-ans[i-K][j-K]),mx);
                }
                
            }
        }
        return mx;
    }  
};

// { Driver Code Starts.

int main() {
    
    int t;
    cin >> t;
    while(t--)
    {
    	int N;
        cin>>N;
        vector<vector<int>> mat(N,vector<int>(N,0));
        
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cin>>mat[i][j];
            }
        }
        
        int k;cin>>k;
        Solution obj;
        cout << obj.Maximum_Sum(mat,N,k)<<"\n";
    }
        
    return 0;
}
  // } Driver Code Ends