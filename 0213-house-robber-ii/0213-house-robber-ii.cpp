class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();  // Total number of houses.

        // Edge case: If there is only one house, the maximum money is the value of that house.
        if (n == 1) return nums[0];

        // Dynamic programming array to store the maximum money stolen up to house `i`.
        vector<int> t(n + 1, 0); // `t[i]` represents the max money stolen up to house `i`.

        // Case 1: Consider houses from 0 to n-2 (exclude the last house).
        t[0] = 0; // Base case: No money if no houses are robbed.
        for (int i = 1; i <= n - 1; i++) {
            int skip = t[i - 1]; // Option 1: Skip the current house.
            int take = nums[i - 1] + ((i - 2 >= 0) ? t[i - 2] : 0); // Option 2: Rob the current house.
            t[i] = max(skip, take); // Take the maximum of both options.
        }
        int result1 = t[n - 1]; // Max money stolen when the last house is excluded.

        // Reset the `t` vector for the next case.
        t.clear();
        t.resize(n + 1, 0);

        // Case 2: Consider houses from 1 to n-1 (exclude the first house).
        t[0] = 0; // Base case: No money if no houses are robbed.
        t[1] = 0; // Base case: First house is excluded.
        for (int i = 2; i <= n; i++) {
            int skip = t[i - 1]; // Option 1: Skip the current house.
            int take = nums[i - 1] + ((i - 2 >= 0) ? t[i - 2] : 0); // Option 2: Rob the current house.
            t[i] = max(skip, take); // Take the maximum of both options.
        }
        int result2 = t[n]; // Max money stolen when the first house is excluded.

        // Return the maximum of both cases.
        return max(result1, result2);
    }
};
