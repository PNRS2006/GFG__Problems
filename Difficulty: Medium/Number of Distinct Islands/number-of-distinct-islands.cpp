class Solution {
  private:
    void dfs(int row, int col, vector<vector<char>>&g, vector<vector<int>>&vis,
    vector<pair<int,int>>& vec, int r0 , int c0){
        vis[row][col] = 1;
        int n = g.size();
        int m = g[0].size();
        
        vector<int> delrow = {-1, 0, +1, 0};
        vector<int> delcol = {0, +1, 0, -1};
        
        vec.push_back({r0-row,c0-col});
        
        for(int i=0;i<4;i++){
            int nrow = delrow[i]+row;
            int ncol = delcol[i]+col;
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && g[nrow][ncol]=='L'){
                dfs(nrow,ncol,g,vis,vec,r0,c0);
            }
        }
    }
  public:
    int countDistinctIslands(vector<vector<char>>& g) {
        // code here
        int n = g.size();
        int m = g[0].size();
        int cnt=0;
        vector<vector<int>>vis(n,vector<int>(m,0));
        set<vector<pair<int,int>>>st;
        

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(!vis[i][j] && g[i][j]=='L'){
                    vector<pair<int,int>>vec;
                    dfs(i,j,g,vis,vec,i,j);
                st.insert(vec);
                }
            }
        }
        
        return st.size();
    }
};
