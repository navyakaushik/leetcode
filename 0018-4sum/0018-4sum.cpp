
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n = nums.size();  // Define n as the size of nums
        sort(nums.begin(), nums.end());  // Sort the array for two-pointer approach

        for(int i = 0; i < n; i++) {
            // Skip duplicates for i
            if(i > 0 && nums[i] == nums[i-1]) continue;
            
            for(int j = i+1; j < n; j++) {
                // Skip duplicates for j
                if(j > (i + 1) && nums[j] == nums[j-1]) continue;
                
                int k = j + 1;
                int l = n - 1;
                
                // Two-pointer approach
                while(k < l) {
                    long long sum = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    
                    if(sum == target) {
                        vector<int> temp = {nums[i], nums[j], nums[k], nums[l]};
                        ans.push_back(temp);
                        
                        k++;
                        l--;
                        
                        // Avoid duplicates for k
                        while(k < l && nums[k] == nums[k-1]) k++;
                        // Avoid duplicates for l
                        while(k < l && nums[l] == nums[l+1]) l--;
                    }
                    else if(sum < target) {
                        k++;
                    }
                    else {
                        l--;
                    }
                }
            }
        }
        
        return ans;  // Return should be outside of the loops
    }
};