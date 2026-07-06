class Solution {
  public:
    vector<vector<int>> findInOutDegree(int V, vector<vector<int>>& e) {
        // code here
        vector<vector<int>>v(V,vector<int>(2));
        vector<vector<int>>adj(V);
        for(auto &i : e){
            adj[i[0]].push_back(i[1]);
        }
        for(int i=0;i<V;i++){
            for(int j : adj[i]){
                v[j][0]++;
            }
            v[i][1]=adj[i].size();
        }
        return v;
    }
};