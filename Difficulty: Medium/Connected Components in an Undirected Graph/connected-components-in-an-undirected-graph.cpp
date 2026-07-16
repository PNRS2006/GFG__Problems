class Solution {
  private:
    void fun(int node, vector<vector<int>>& adj, vector<int>& vis, vector<int>& vec){
        queue<int>q;
        q.push(node);
        vis[node]=1;
        vec.push_back(node);
        while(!q.empty()){
            int n = q.front();
            q.pop();
            for(auto i : adj[n]){
                if(!vis[i]){
                vis[i] = 1;
                q.push(i);
                vec.push_back(i);
                }
            }
        }
    }
  public:
    vector<vector<int>> getComponents(int V, vector<vector<int>>& e) {
        // code here
        vector<vector<int>>v;
        vector<int>vis(V,0);
        vector<vector<int>>adj(V);
        for(auto &i : e){
            adj[i[0]].push_back(i[1]);
            adj[i[1]].push_back(i[0]);
        }
        for(int i=0;i<V;i++){
            if(!vis[i]){
                vector<int>c;
                fun(i,adj,vis,c);
                v.push_back(c);
            }
        }
        return v;
    }
};
