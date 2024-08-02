class Solution {
public:
    int editDistance(string str1, string str2) {
        int m = str1.length();
        int n = str2.length();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1));
        
        for (int i = 0; i <= m; i++) {
            for (int j = 0; j <= n; j++) {
                if (i == 0) {
                    dp[i][j] = j; // Insert all characters of str2
                } else if (j == 0) {
                    dp[i][j] = i; // Remove all characters of str1
                } else if (str1[i - 1] == str2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1]; // Characters match
                } else {
                    dp[i][j] = 1 + min({dp[i - 1][j],    // Remove
                                        dp[i][j - 1],    // Insert
                                        dp[i - 1][j - 1] // Replace
                                       });
                }
            }
        }
        return dp[m][n];
    }
};
