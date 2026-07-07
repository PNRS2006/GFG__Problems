class Solution {
  public:
    int largestArea(int n, int m, vector<vector<int>> &a) {
        // code here
        vector<int>r,c;
        for(auto &v : a){
            r.push_back(v[0]);
            c.push_back(v[1]);
        }
        int row=0 , col=0 , r1=0 , c1=0;
        for(int i=0;i<n;i++){
            if(find(r.begin(),r.end(),i+1)!=r.end()) r1=0;
            else{
                r1++;
                row = max(row,r1);
            }
        }
        for(int i=0;i<m;i++){
            if(find(c.begin(),c.end(),i+1)!=c.end()) c1=0;
            else{
                c1++;
                col = max(col,c1);
            }
        }
        return row*col;
    }
};