class Solution {
  public:
    int getCount(int n) {
        // code here
        if(n==1) return 0;
        int l=0,r=0,c=0;
        long long sum=0;
        while(r<n){
            while(sum<n){
                sum+=r;
                r++;
            }
            if(sum==n) {
                c++;
                sum+=r;
                r++;
            }
            if(sum>n){
                sum-=l;
                l++;
            }   
            // cout << sum << " ";
        }
        return c;
        // return 0;
    }
};