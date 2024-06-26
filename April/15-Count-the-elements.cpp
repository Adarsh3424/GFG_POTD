class Solution {
  public:
    vector<int> countElements(vector<int> &a, vector<int> &b, int n, vector<int> &query,
                              int q) {
        // Your code goes here;
          vector<int> res;
        // unordered_map<int,int>mp;
        for(int i=0;i<query.size();i++){
            query[i] = a[query[i]];
        }
        int maxi = INT_MIN;
        for(auto x:a){
            // mp[x] = 1;
            maxi = max(x, maxi);
        }
        for(auto x:b){
            // mp[x] += 1;
            maxi = max(x, maxi);
        }
        int mp[maxi+1]={0};
        for(auto x:b){
            mp[x] += 1;
            // maxi = max(x, maxi);
        }
        for(int i=1;i<=maxi;i++){
            mp[i] = mp[i] + mp[i-1];
            // cout<<mp[i]<<" ";
        }
        for(auto q:query){
            res.push_back(mp[q]);
        }
        return res;
    }
};
