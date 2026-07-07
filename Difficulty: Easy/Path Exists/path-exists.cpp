class Solution {
  public:
    bool checkPath(int V, vector<vector<int>>& e, int src, int dest) {
        // Code here
        vector<vector<int>>adj(V);
        for(auto &i : e){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int>vis(V,0);
        queue<int>q;
        q.push(src);
        vis[src]=1;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            for(int i : adj[node]){
                if(!vis[i]){
                    vis[i]=1;
                    q.push(i);
                }
            }
        }
        return vis[dest]==1;
    }
};
