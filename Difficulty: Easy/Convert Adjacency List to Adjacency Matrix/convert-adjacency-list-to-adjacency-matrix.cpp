class Solution {
  public:
    vector<vector<int>> adjToMat(vector<vector<int>>& adj) {
        // code here
        vector<vector<int>> v(adj.size(), vector<int>(adj.size(), 0));
        for(int i=0;i<adj.size();i++){
            for(int j=0;j<adj[i].size();j++) v[i][adj[i][j]]=1;
        }
        return v;
    }
};