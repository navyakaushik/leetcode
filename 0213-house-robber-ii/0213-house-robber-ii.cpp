class Solution {
public:
    int t[101];
    
    int solve(vector<int>& nums, int i, int n) {
        if (i >= n)
            return 0;

        if (t[i] != -1)
            return t[i];

        int take = nums[i] + solve(nums, i + 2, n);
        int skip = solve(nums, i + 1, n);

        return t[i] = max(take, skip);
    }

    int rob(vector<int>& nums) {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        if (n == 2)
            return max(nums[0], nums[1]);

        memset(t, -1, sizeof(t));
        int take_0th_index_house = solve(nums, 0, n - 1); // Adjusted the range here

        memset(t, -1, sizeof(t));
        int take_1st_index_house = solve(nums, 1, n);

        return max(take_0th_index_house, take_1st_index_house);
    }
};
