class Solution {
public:
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1; 

        while(low <= high) {
            int mid = (low + high) / 2;
            if(nums[mid] == target) 
                return mid;

            if(nums[low] <= nums[mid]) { // Left half is sorted
                if(nums[low] <= target && target <= nums[mid]) {
                    high = mid - 1; // Target is in the left half
                } else {
                    low = mid + 1; // Target is in the right half
                }
            } else { // Right half is sorted
                if(nums[mid] <= target && target <= nums[high]) { 
                    low = mid + 1; // Target is in the right half
                } else {
                    high = mid - 1; // Target is in the left half
                }
            }
        }
        return -1; // Target not found
    }
};
