class Solution {
  private:
    void dfs(int row, int col, vector<vector<int>>&g, vector<vector<int>>&vis, vector<int>& delrow, vector<int>& delcol){
        vis[row][col] = 1;
        int n = g.size();
        int m = g[0].size();
        for(int i=0;i<4;i++){
            int nrow = delrow[i]+row;
            int ncol = delcol[i]+col;
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && g[nrow][ncol]==1){
                dfs(nrow,ncol,g,vis,delrow,delcol);
            }
        }
    }
  public:
    int cntOnes(vector<vector<int>>& g) {
        // code here
        int n = g.size();
        int m = g[0].size();
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        vector<int> delrow = {-1, 0, +1, 0};
        vector<int> delcol = {0, +1, 0, -1};
        
        for(int i=0;i<m;i++){
            if(!vis[0][i] && g[0][i]==1) dfs(0,i,g,vis,delrow,delcol);
            if(!vis[n-1][i] && g[n-1][i]==1) dfs(n-1,i,g,vis,delrow,delcol);
        }
        for(int i=0;i<n;i++){
            if(!vis[i][0] && g[i][0]==1) dfs(i,0,g,vis,delrow,delcol);
            if(!vis[i][m-1] && g[i][m-1]==1) dfs(i,m-1,g,vis,delrow,delcol);
        }
        
        int cnt=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && g[i][j]==1) cnt++;
            }
        }
        return cnt;
    }
};