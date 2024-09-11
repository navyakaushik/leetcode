class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        //brute force approach
        // Pointers for nums1 and nums2, starting from the end of valid elements
        int i = m - 1;  // Last valid element in nums1
        int j = n - 1;  // Last element in nums2
        int k = m + n - 1;  // Last position in nums1 (includes extra space)

        // Merge nums1 and nums2 from the end
        while(i >= 0 && j >= 0) {
            if(nums1[i] > nums2[j]) {
                nums1[k--] = nums1[i--];  // Place larger element at the end
            } else {
                nums1[k--] = nums2[j--];  // Place larger element at the end
            }
        }

        // If any elements remain in nums2, copy them over
        while(j >= 0) {
            nums1[k--] = nums2[j--];
        }
        // No need to copy elements from nums1, as they are already in place
    }
};
