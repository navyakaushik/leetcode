#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        set<vector<int>> st;  // To avoid duplicates
        for(int i = 0; i < n; i++) {
            for(int j = i+1; j < n; j++) {
                set<long long> hashset;  // Hashset to store seen numbers
                for(int k = j+1; k < n; k++) {
                    long long sum = nums[i] + nums[j];
                    sum += nums[k];
                    long long fourth = target - sum;  // Calculate the required fourth number

                    // Check if fourth number exists in hashset
                    if(hashset.find(fourth) != hashset.end()) {
                        vector<int> temp = {nums[i], nums[j], nums[k], (int)fourth};  // Use fourth directly
                        sort(temp.begin(), temp.end());  // Sort to avoid permutation duplicates
                        st.insert(temp);  // Add to the set
                    }

                    hashset.insert(nums[k]);  // Add the current number to the hashset
                }
            }
        }

        vector<vector<int>> ans(st.begin(), st.end());  // Convert set to vector
        return ans;
    }
};
