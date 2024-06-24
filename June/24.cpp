class Solution {
  public:
    long long sumMatrix(long long n, long long q) {
        long long cnt = 0;
        if (q >= 2 && q <= 2 * n) {
            cnt = min(q - 1, 2 * n - q + 1);
        }
        return cnt;
    }
};