class Solution {
  public:
    vector<int> findDuplicates(vector<int>& a) {
        // code here
        unordered_map<int,int>m;
        for(int i : a) m[i]++;
        vector<int>ki;
        for(auto [k,v] : m) if(v==2) ki.push_back(k);
        return ki;
    }
};