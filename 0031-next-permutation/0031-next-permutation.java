class Solution {
    public void nextPermutation(int[] nums) {
        int n = nums.length;
        
        //step 1 to find the break point
        
        int ind = -1;
        for(int i = n-2; i >=0; i--){
            if(nums[i] < nums[i+1]){
                //index i i sthe break point
                ind = i;
                break;
            }
        }
        
        //if break point does not exist
        if(ind == -1){
            reverse(nums, 0, n-1);
            return;
        }
        
        //step 2: find the next greater element and swap it with arr[ind]
        
        for(int i = n-1; i > ind; i--){
            if(nums[i] > nums[ind]){
                swap(nums, i, ind);
                break;
            }
        }
        
        //step 3 : reverse the right half
        reverse(nums, ind+1, n-1);
        
    }
               private void reverse(int[] nums, int start, int end){
                   while(start<end){
                       swap(nums, start++, end--);
                   }
               }
               private void swap(int[] nums, int i, int j){
                   int temp = nums[i];
                   nums[i] = nums[j];
                   nums[j] = temp;
               }
}