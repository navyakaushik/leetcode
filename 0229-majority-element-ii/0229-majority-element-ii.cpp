class Solution {
public:
    // Optimal solution using Moore's Voting Algorithm
    vector<int> majorityElement(vector<int>& nums) {
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN, el2 = INT_MIN;

        // Step 1: Find potential candidates for majority elements
        for(int i = 0; i < nums.size(); i++){
            if(cnt1 == 0 && el2 != nums[i]){
                cnt1 = 1;
                el1 = nums[i];
            }
            else if(cnt2 == 0 && el1 != nums[i]){
                cnt2 = 1;
                el2 = nums[i];
            }
            else if(nums[i] == el1) cnt1++;
            else if(nums[i] == el2) cnt2++;
            else{
                cnt1--, cnt2--;
            }
        }

        // Step 2: Validate if the candidates appear more than n/3 times
        vector<int> ls;
        cnt1 = 0, cnt2 = 0;
        for(int i = 0; i < nums.size(); i++){
            if(el1 == nums[i]) cnt1++;
            if(el2 == nums[i]) cnt2++;
        }

        int mini = nums.size() / 3;
        if(cnt1 > mini) ls.push_back(el1);
        if(cnt2 > mini) ls.push_back(el2);

        return ls;
    }
};
