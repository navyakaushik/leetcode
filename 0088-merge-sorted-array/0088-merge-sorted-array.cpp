class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i = m - 1;  // Pointer for the last element in the valid part of nums1
        int j = n - 1;  // Pointer for the last element in nums2
        int k = m + n - 1;  // Pointer for the last position in nums1 (including zeros)

        // Merge nums2 into nums1 starting from the back
        while (i >= 0 && j >= 0) {
            if (nums1[i] > nums2[j]) {
                nums1[k] = nums1[i];
                i--;
            } else {
                nums1[k] = nums2[j];
                j--;
            }
            k--;
        }

        // If there are any remaining elements in nums2, add them to nums1
        while (j >= 0) {
            nums1[k] = nums2[j];
            k--;
            j--;
        }
    }
};
