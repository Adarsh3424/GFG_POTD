class Solution {
public:
    vector<int> getPrimes(int n) {
        if (n <= 3) {
            return {-1, -1};
        }

        // Step 1: Generate all prime numbers up to n using the Sieve of Eratosthenes
        vector<bool> isPrime(n + 1, true);
        isPrime[0] = isPrime[1] = false;

        for (int p = 2; p * p <= n; ++p) {
            if (isPrime[p]) {
                for (int multiple = p * p; multiple <= n; multiple += p) {
                    isPrime[multiple] = false;
                }
            }
        }

        // Step 2: Create a list of all prime numbers up to n
        vector<int> primes;
        for (int i = 2; i <= n; ++i) {
            if (isPrime[i]) {
                primes.push_back(i);
            }
        }

        // Step 3: Use the two-pointer approach to find the pair of primes that sum up to n
        int i = 0, j = primes.size() - 1;
        while (i <= j) {
            int sum = primes[i] + primes[j];
            if (sum == n) {
                return {primes[i], primes[j]};
            } else if (sum < n) {
                ++i;
            } else {
                --j;
            }
        }

        return {-1, -1};
    }
};
