class Solution {
public:
    // MOORE'S VOTING ALGORITHM
    int majorityElement(vector<int>& nums) {
        int cnt = 0;
        int el = -1;
        
        // First loop to find a potential candidate
        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0) {
                cnt = 1;
                el = nums[i];
            } else if (nums[i] == el) {
                cnt++;
            } else {
                cnt--;
            }
        }

        // Second loop to confirm if the candidate is indeed the majority
        int cnt1 = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == el) cnt1++;
        }

        // Check if the candidate appears more than n/2 times
        if (cnt1 > nums.size() / 2) {
            return el;
        }

        return -1;
    }
};
