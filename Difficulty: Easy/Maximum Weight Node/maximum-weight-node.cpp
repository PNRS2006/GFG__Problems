class Solution {
  public:
    int maxWeightCell(vector<int> &e) {
        // code here
        vector<int>v(e.size());
        for(int i=0;i<e.size();i++){
            if(e[i]!=-1) {
                v[e[i]]+=i;
                // cout << e[i] << " " <<  v[e[i]] << endl;
            }
        }
        // sort(v.rbegin(),v.rend());
        int k=0;
        int x=*max_element(v.begin(),v.end());
        for(int i=0;i<v.size();i++) {
            if(v[i]==x) k=max(k,i);
        }
        return k;
    }
};