class Solution {
  private:
    bool detect(int src, vector<int>& vis, vector<vector<int>>& adj){
        queue<pair<int,int>>q;
        q.push({src,-1});
        vis[src]=1;
        while(!q.empty()){
            int node = q.front().first;
            int parent = q.front().second;
            q.pop();
            for(auto &i : adj[node]){
                if(!vis[i]){
                    vis[i]=1;
                    q.push({i,node});
                }
                else if(parent != i) return true;
            }
        }
        return false;
    }
  public:
    bool isCycle(int V, vector<vector<int>>& e) {
        // Code here
        vector<vector<int>>adj(V);
        for(auto &i : e){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        vector<int>vis(V,0);
        for(int i=0;i<V;i++){
            if(!vis[i]){
                if(detect(i,vis,adj)) return true;
            }
        }
        return false;
    }
};