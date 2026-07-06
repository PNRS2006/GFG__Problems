class Solution {
  public:
    void dfs(int node,vector<vector<int>>& adj, vector<int>& v,vector<int>& vis){
        vis[node] = 1;
        v.push_back(node);
        for(auto i : adj[node]){
            if(!vis[i]){
                dfs(i,adj,v,vis);
            }
        }
    }
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        int vi=adj.size();
        vector<int>vis(vi,0);
        int node = 0;
        vector<int>v;
        dfs(node , adj, v, vis);
        return v;
    }
};