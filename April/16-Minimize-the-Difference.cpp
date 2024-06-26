class Solution {
  public:
    int minimizeDifference(int n, int k, vector<int> &arr) {
        // code here
         vector<pair<int,int>>nums(n);
        nums[n-1]={arr[n-1],arr[n-1]};
        for(int i=n-2;i>=0;i--){
            nums[i]={max(nums[i+1].first,arr[i]),min(nums[i+1].second,arr[i])};
        }
        int maxi=0;
        int mini=1e9;
        int ans=1e9;
        for(int i=k;i<n;i++){
            ans = min(ans,max(maxi,nums[i].first)-min(mini,nums[i].second));
            maxi=max(maxi,arr[i-k]);
            mini=min(mini,arr[i-k]);
        }
        ans= min(ans,maxi-mini);
        return ans;
    }
};
