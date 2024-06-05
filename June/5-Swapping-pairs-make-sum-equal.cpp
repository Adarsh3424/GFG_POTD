class Solution {

  public:
    int findSwapValues(int a[], int n, int b[], int m) {
        // Your code goes here
        int nsum{0};
        int msum{0};
        
        for(int i{0};i<n;i++)
            nsum += a[i];
        for(int i{0};i<m;i++)
            msum += b[i];
            
        int dif = msum - nsum;
        if(dif==0) return 1;
        
        sort(a, a+n);    
        sort(b, b+m);    
    
        int i{0};
        while(i<n and a[i]<=abs(dif))
        {
            if((dif+2*a[i])%2==0)
                if(binary_search(b,b+m,(dif+2*a[i])/2))
                    return 1;
            i++;
        }
        
        return -1;
    }
};
