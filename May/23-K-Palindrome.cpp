class Solution{
private:
    int longestCommonSubsequence(const string& str1, const string& str2) {
        int n = str1.size();
        vector<vector<int>> lcs(n + 1, vector<int>(n + 1, 0));
    
        for (int i = 1; i <= n; ++i) {
            for (int j = 1; j <= n; ++j) {
                if (str1[i - 1] == str2[j - 1]) {
                    lcs[i][j] = lcs[i - 1][j - 1] + 1;
                } else {
                    lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
                }
            }
        }
        return lcs[n][n];
    }
public:
    int kPalindrome(string str, int n, int k)
    {
        // code here
        string revStr = string(str.rbegin(), str.rend());
        int lcsLength = longestCommonSubsequence(str, revStr);
        int minDeletions = n - lcsLength;
        return minDeletions <= k;
    }
};
