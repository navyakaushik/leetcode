class Solution {
public:
    bool check(vector<int>& nums) {
        const int n = nums.size();
        int count = 0; 
        
        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > nums[(i+1) % n]){
                count++;
            }
        }
        return count <= 1;
        
    }
};