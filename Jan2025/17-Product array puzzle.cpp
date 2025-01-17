class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
           int n=arr.size();
        int zerocnt=0;
        int pro=1;
        
        
        for(int i=0;i<n;i++){
            if(arr[i]==0)zerocnt++;
            else pro*=arr[i];
        }
        vector<int>res(n,0);
        if(zerocnt>1){
            return res;
        }
        
        for(int i=0;i<n;i++){
            if(arr[i]==0)res[i]=pro;
            else if(zerocnt==0){
                res[i]=pro/arr[i];
            }
        }
        return res;
    }
};
