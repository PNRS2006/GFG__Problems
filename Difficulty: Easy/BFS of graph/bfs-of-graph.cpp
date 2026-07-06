class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        int V = adj.size();
        int vis[V]={0};
        vis[0] = 1;
        vector<int>v;
        queue<int>q;
        q.push(0);
        while(!q.empty()){
            int n = q.front();
            q.pop();
            v.push_back(n);
            for(auto i : adj[n]){
                if(!vis[i]){
                    vis[i]=1;
                    q.push(i);
                }
            } 
        }
        return v;
    }
};