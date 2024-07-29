class Solution {
  public:
    int rowWithMax1s(vector<vector<int> > &arr) {
        // code here
         int ans=-1;
        int maxones=0;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr[0].size();j++)
            {
                if(arr[i][j]==1)
                {
                    int onescount=arr[0].size()-j;
                    if(onescount>maxones)
                    {
                        ans=i;
                        maxones=onescount;
                    }
                    break;
                }
            }
        }
        return ans;
    }
};
