class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
       //optimal
         vector<vector<int>> ans;
        int n = nums.size();

        // Sort the array to apply the two-pointer approach
        sort(nums.begin(), nums.end());

        // Iterate through the array
        for (int i = 0; i < n; i++) {
            // Skip duplicates for the first element
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            // Use two pointers to find pairs that sum to -nums[i]
            int j = i + 1;
            int k = n - 1;

            while (j < k) {
                int sum = nums[i] + nums[j] + nums[k];

                if (sum < 0) {
                    // Move the left pointer to the right to increase the sum
                    j++;
                }
                else if (sum > 0) {
                    // Move the right pointer to the left to decrease the sum
                    k--;
                }
                else {
                    // Found a valid triplet
                    ans.push_back({nums[i], nums[j], nums[k]});

                    // Move both pointers to avoid duplicates
                    j++;
                    k--;

                    // Skip duplicates for the second element
                    while (j < k && nums[j] == nums[j - 1]) j++;
                    // Skip duplicates for the third element
                    while (j < k && nums[k] == nums[k + 1]) k--;
                }
            }
        }

        return ans;
    }
};
