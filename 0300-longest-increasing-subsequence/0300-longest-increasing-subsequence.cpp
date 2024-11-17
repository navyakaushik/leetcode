class Solution {
public:
    int n; // Size of the input array
    int t[2501][2501]; // DP table to store results of subproblems

    // Recursive function to find the length of the LIS
    int solve(vector<int>& nums, int i, int P) {
        // Base case: if we have processed all elements
        if (i >= n) 
            return 0;

        // Check if the result is already stored in the DP table
        if (P != -1 && t[i][P] != -1) {
            return t[i][P];
        }

        // Case 1: Include the current element if it forms an increasing sequence
        int take = 0;
        if (P == -1 || nums[i] > nums[P]) {
            take = 1 + solve(nums, i + 1, i); // Include current element
        }

        // Case 2: Skip the current element
        int skip = solve(nums, i + 1, P);

        // Store the result in the DP table (only if P is valid)
        if (P != -1) {
            t[i][P] = max(take, skip);
        }

        // Return the maximum of including or skipping the current element
        return max(take, skip);
    }

    // Main function to calculate the length of the LIS
    int lengthOfLIS(vector<int>& nums) {
        n = nums.size(); // Get the size of the array
        memset(t, -1, sizeof(t)); // Initialize the DP table with -1

        // Start the recursive function with initial indices
        return solve(nums, 0, -1);
    }
};
