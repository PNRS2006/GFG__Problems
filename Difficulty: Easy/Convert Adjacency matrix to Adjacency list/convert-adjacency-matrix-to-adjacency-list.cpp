class Solution {
  public:
    vector<vector<int>> matToAdj(vector<vector<int>>& adj) {
        // code here
        vector<vector<int>>e(adj.size());
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj.size();j++){
                if(adj[i][j]==1){
                    e[i].push_back(j);
                }
            }
        }
        return e;
    }
};