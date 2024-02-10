class Solution {
public:

    int f(int i,int j,int k,vector<vector<int>> &arr,int n,vector<vector<vector<int>>> &dp){
        if(i == n || j == n || k <= 0) return 0;
        
        if(i == n-1 && j == n-1){
            if(k == arr[i][j]) return 1;
            return 0;
        }
        
        if(dp[i][j][k] != -1) return dp[i][j][k];
        
        int first = 0,second = 0;
        if((k-arr[i][j]) >= 0){
            first = f(i+1,j,k-arr[i][j],arr,n,dp);
        }
        
        if((k- arr[i][j]) >=0 ){
            second = f(i,j+1,k-arr[i][j],arr,n,dp);
        }
        
        return dp[i][j][k] = first + second;
    }

    
    long long numberOfPath(int n, int k, vector<vector<int>> &arr){
        
        // Code Here
        vector<vector<vector<int>>> dp(n ,vector<vector<int>> (n,vector<int> (k+1,-1)));
        return f(0,0,k,arr,n,dp);

        
    }
};
