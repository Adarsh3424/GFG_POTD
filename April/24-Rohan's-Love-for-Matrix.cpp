class Solution {
  public:
    int firstElement(int n) {
        // code here
         int m = 1e9+7;
        int prev2 = 1;
        int prev1 = 1;
        if(n<=2) return prev1;
        
        for(int i=3; i<=n; i++){
            int x = prev1;
            prev1 = (prev1+prev2)%m;
            prev2 = x;
        }
        
        return prev1;
    }
};
