class Solution {
  private:
    void dfs(int row, int col, vector<vector<char>>& grid , vector<vector<int>>& vis,int delrow[] , int delcol[]){
        int n = grid.size();
        int m = grid[0].size();
        vis[row][col]=1;
        for(int i=0;i<4;i++){
            int nrow = row+delrow[i];
            int ncol = col+delcol[i];
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]=='O'){
                dfs(nrow,ncol,grid,vis,delrow,delcol);
                
            }
        }
    }
  public:
    void fill(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        
        int delrow[] = {-1 , 0 , +1 , 0};
        int delcol[] = {0 , +1 , 0 , -1};
        
        vector<vector<int>>vis(n,vector<int>(m,0));
        
        for(int j=0;j<m;j++){
            if(!vis[0][j] && grid[0][j]=='O'){
                dfs(0,j,grid,vis,delrow,delcol);
            }
            if(grid[n-1][j]=='O' && !vis[n-1][j]){
                dfs(n-1,j,grid,vis,delrow,delcol);
            }
        }
        for(int i=0;i<n;i++){
            if(grid[i][0]=='O' && !vis[i][0]){
                dfs(i,0,grid,vis,delrow,delcol);
            }
            if(grid[i][m-1]=='O' && !vis[i][m-1]){
                dfs(i,m-1,grid,vis,delrow,delcol);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]=='O' && !vis[i][j]) grid[i][j]='X';
            }
        }
    }
};