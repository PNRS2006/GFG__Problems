class Solution {
  public:
    bool checkEdge(vector<vector<int>>& adj, int u, int v) {
        // code here
        return find(adj[u].begin(),adj[u].end(),v)!=adj[u].end();
    }
};