class Solution {
  public:
    int countEdges(vector<vector<int>>& adj) {
        // code here
        int c=0;
        for(auto &i : adj) c+=i.size();
        return c/2;
    }
};