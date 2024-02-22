class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int result = 0;

        for(int i = 0; i < nums.size(); i++)
        {
            int temp = nums[i];
            int digits = 0;

            while(temp>0){
                temp /= 10;
                digits++;
            }
            if(digits%2 == 0)
            result++;
        }
        return result;

    }
};