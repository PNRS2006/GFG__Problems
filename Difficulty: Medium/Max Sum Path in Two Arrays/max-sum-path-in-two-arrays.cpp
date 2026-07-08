class Solution {
  public:
    int maxPathSum(vector<int> &a, vector<int> &b) {
        long long s1=0 , s2=0 , s=0;
        int i=0 , j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]>b[j]) s2+=b[j++];
            else if(b[j]>a[i]) s1+=a[i++];
            else{
                s += max(s1,s2)+a[i];
                i++;
                j++;
                s1=0;
                s2=0;
            }
        }
        while(i<a.size()) s1+=a[i++];
        while(j<b.size()) s2+=b[j++];
        return s+max(s1,s2);
    }
};