class Solution {
  public:
    long long maxTip(int n, int x, int y, vector<int> &a, vector<int> &b) {
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++)
        {
            v.push_back({a[i]-b[i],i});
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        
        long long s=0;
        
        for(int i=0;i<n;i++)
        {
            if(v[i].first>=0)
            {
                if(x!=0)
                {
                   s=s+a[v[i].second];
                   x--; 
                }
                else
                {
                s=s+b[v[i].second];
                y--;
                }
            }
            else
            {
                if(n-i<=y)
                {
                    s=s+b[v[i].second];
                    y--;
                }
                else{
                    s=s+a[v[i].second];
                    x--;
                }
            }
            
        }
        return s;
        
    }
};
