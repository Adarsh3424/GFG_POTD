class Solution {
  public:
    vector<long long> jugglerSequence(long long n) {
        // code here
         vector<long long> result = {n};
        while(n != 1) result.push_back(n = pow(n, n % 2 + 0.5));
        return result;
    }
};
