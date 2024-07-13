class Solution {
  public:
    void segregate0and1(vector<int> &arr) {
        // code here
        int cnt0=0;
        int cnt1=0;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==0) cnt0++;
            else cnt1++;
        }
        
        int k=0;
        while(cnt0--) arr[k++]=0;
        
        while(cnt1--) arr[k++]=1;
    }
};
