class Solution {
  public:
    int maxAmount(vector<int>& a, int k) {
        // code here
        int mod = 1e9+7;
        long long s=0;
        priority_queue<int>q;
        for(int i : a) q.push(i);
        while(k-- && !q.empty()){
            int p = q.top();
            q.pop();
            s = (s+p)%mod;
            if(p>1) q.push(p-1);
        }
        return s;
    }
};