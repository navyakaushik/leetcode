class Solution {
 public:
  vector<int> twoSum(vector<int>& nums, int target) {
      // Step 1: Create a map to store numbers and their indices.
        unordered_map<int, int> numMap;
        // Step 2: Add each number and its index to the map.
        for (int i = 0; i < nums.size(); i++) {
            numMap[nums[i]] = i;
        }
        // Step 3: Check for each number, if its complement exists in the map.
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            // Ensure the complement is not the number itself.
            if (numMap.count(complement) && numMap[complement] != i) {
                // Step 4: If the complement exists, the indices are returned.
                return {i, numMap[complement]};
            }
        }
        // Step 5: If no two numbers sum up to the target, return an empty vector.
        return {};

    }
};