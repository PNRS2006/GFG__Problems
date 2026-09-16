class Solution {
  public:
    int dominantPairs(vector<int> &a) {
        // Code here
        int c=0 , n=a.size();
        sort(a.begin(),a.begin()+n/2);
        sort(a.begin()+n/2,a.end());
        // for(int i : a) cout << i << " ";
        int l=0, r=n/2;
        while(l<n/2 && r<n){
            if(a[l]>=5*a[r]){
                c+=(n/2)-l;
                r++;
            }
            else l++;
        }
        return c;
    }
};