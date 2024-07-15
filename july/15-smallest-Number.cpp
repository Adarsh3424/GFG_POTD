class Solution {
  public:
    string smallestNumber(int s, int d) {
        // code here
       int n = 1;
        
        for(int i =1; i<d; i++){
            n*=10;
        }
        
        int ndash = n*10;
        
        for(int i=n; i<ndash; i++){
            int sum = 0;
            int x = i;
            
            while(x>0){
                sum+=(x%10);
                x = x/10;
                if(sum==s){
                    return to_string(i);
                    break;
                }
            }
        }
        return to_string(-1);
    
    }
};
