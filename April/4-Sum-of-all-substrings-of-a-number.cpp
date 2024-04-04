class Solution
{
    public:
    //Function to find sum of all possible substrings of the given string.
    long long sumSubstrings(string s){
        
        // your code here
         // HAKUNA MATATA
        int n = s.length();
        long long int ans = 0, INF = 1e9+7, temp = 0 ;
        
        for(int i = 0; i<n; ++i){
            int num = s[i] - '0';
            long long int unit = num * (i+1);
            temp = (((temp*10)%INF)+unit)%INF;
            ans = (ans + temp)%INF;
            
        }
        
        return ans%INF;
    
