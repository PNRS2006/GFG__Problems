class Solution {
  public:
  
    void dfs(int node,vector<vector<int>>& adj,vector<int>& vis){
        vis[node]=1;
        for(int i : adj[node]){
            if(!vis[i]) dfs(i,adj,vis);
        }
    }
        
    int countConnected(int V, vector<vector<int>>& e) {
        // code here
        
        vector<vector<int>>adj(V);
        for(int i=0;i<e.size();i++){
            adj[e[i][0]].push_back(e[i][1]);
            adj[e[i][1]].push_back(e[i][0]);
        }
        vector<int>vis(V,0);
        int c=0;
        // BFS::
        
        // for(int i=0;i<V;i++){
        //     if(!vis[i]){
        //         c++;
        //         vis[i]=1;
        //         queue<int>q;
        //         q.push(i);
        //         while(!q.empty()){
        //             int n = q.front();
        //             q.pop();
        //             for(int j : adj[n]){
        //                 if(!vis[j]){
        //                     vis[j]=1;
        //                     q.push(j);
        //                 }
        //             }
        //         }
        //     }
        // }
        // return c;
        
        //DFS ::
        
        
        for(int i=0;i<V;i++){
            if(!vis[i]){
                c++;
                dfs(i,adj,vis);
            }
        }
        return c;
    }
};