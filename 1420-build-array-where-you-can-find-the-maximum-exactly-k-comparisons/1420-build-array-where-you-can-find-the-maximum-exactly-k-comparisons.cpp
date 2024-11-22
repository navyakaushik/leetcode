class Solution {
public:
    int N, M, K;
    int t[51][51][101];
    const int MOD = 1e9 + 7;

    int solve(int idx, int searchCost, int maxSoFar) {
        if (idx == N) {
            // Base case: if we have constructed the full array, check if the searchCost matches K
            if (searchCost == K) {
                return 1;
            }
            return 0;
        }

        // Check memoized result
        if (t[idx][searchCost][maxSoFar] != -1) {
            return t[idx][searchCost][maxSoFar];
        }

        int result = 0;

        // Iterate over all possible numbers in the range [1, M]
        for (int i = 1; i <= M; i++) {
            if (i > maxSoFar) {
                // If `i` is greater than the current maxSoFar, increase the searchCost
                result = (result + solve(idx + 1, searchCost + 1, i)) % MOD;
            } else {
                // Otherwise, continue with the same searchCost
                result = (result + solve(idx + 1, searchCost, maxSoFar)) % MOD;
            }
        }

        // Memoize the result before returning
        return t[idx][searchCost][maxSoFar] = result;
    }

    int numOfArrays(int n, int m, int k) {
        N = n;
        M = m;
        K = k;

        // Initialize memoization table with -1
        memset(t, -1, sizeof(t));

        // Start the recursion with initial state
        return solve(0, 0, 0);
    }
};
