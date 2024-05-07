class Solution {
public:
    int f(int x,vector<int>& nums){
    int cnt=0;
        for(int i = 0; i < x; i++){
            if(nums[i]==nums[x]){
                cnt+=1;
            }
        }
        return cnt;
    }
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        for (int x = 0; x < n; x++){
            ans += f(x,nums);
        }
        return ans;
    }
};