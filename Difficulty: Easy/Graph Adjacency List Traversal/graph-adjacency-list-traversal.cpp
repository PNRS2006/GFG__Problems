class Solution {
  public:
    vector<vector<int>> printGraph(int V, vector<pair<int, int>>& e) {
        // code here
        vector<vector<int>>v(V);
        for(auto &i : e){
            v[i.first].push_back(i.second);
            v[i.second].push_back(i.first);
        }
        return v;
    }
};