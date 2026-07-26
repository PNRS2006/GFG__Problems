class Solution {
  public:
    vector<vector<int>> levelSort(vector<int>& arr) {
        // code here
        vector<vector<int>>v;
        int n=arr.size();
        int a=2;
        int i=1;
        v.push_back({arr[0]});
        while(n>=a){
            vector<int>v1;
            for(int j=i;j<i+a && j<arr.size();j++){
                v1.push_back(arr[j]);
            }
            sort(v1.begin(),v1.end());
            v.push_back(v1);
            i=i+a;
            n-=a;
            a*=2;
        }
        vector<int>v2;
        while(i<arr.size()) v2.push_back(arr[i++]);
        sort(v2.begin(),v2.end());
        if(v2.size()>0) v.push_back(v2);
        return v;
    }
};
