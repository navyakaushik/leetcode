class Solution {
public:
    int n; // Size of the input array
    long long t[100001][2]; // Memoization table: t[idx][iseven] for storing results

    // Recursive function to calculate the maximum alternating sum
    long long solve(int idx, vector<int>& nums, bool iseven) {
        // Base case: If we reach beyond the last index, return 0
        if (idx >= n) {
            return 0;
        }

        // If the result for this state has already been calculated, return it
        if (t[idx][iseven] != -1) {
            return t[idx][iseven];
        }

        // Option 1: Skip the current element
        long long skip = solve(idx + 1, nums, iseven);

        // Option 2: Take the current element
        // If it's an even turn (add the element), use nums[idx] as is
        // If it's an odd turn (subtract the element), negate nums[idx]
        long long val = nums[idx];
        if (!iseven) { // Negate the value if it's an "odd" turn
            val = -val;
        }

        // Recursive call for the next index, toggling between adding/subtracting
        long long take = solve(idx + 1, nums, !iseven) + val;

        // Store the maximum of the two options in the memoization table
        return t[idx][iseven] = max(skip, take);
    }

    // Public function to initiate the calculation
    long long maxAlternatingSum(vector<int>& nums) {
        n = nums.size(); // Initialize the size of the input array
        std::fill(&t[0][0], &t[0][0] + sizeof(t) / sizeof(t[0][0]), -1); // Initialize the memoization table with -1
        return solve(0, nums, true); // Start solving from the first index with an "even" turn (add the first element)
    }
};
