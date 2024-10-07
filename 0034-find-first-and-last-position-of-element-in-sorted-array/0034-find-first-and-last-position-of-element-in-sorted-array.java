class Solution {
    
    int lowerBound(int[] arr, int n, int x){
        int low = 0;
        int high = n-1;
        int ans = n;
        while(low <= high){
            int mid = (low + high) / 2;
            //maybe an answer
            if(arr[mid] >= x){
                ans = mid;
                //look for more small index on left
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    
    int upperBound(int[] arr, int n, int x){
        int low = 0, high = n - 1;
        int ans = n;
        while(low <= high){
            int mid = (low + high) / 2;
            //maybe an answer
            if(arr[mid] > x){
                ans = mid;
                //look for small index on left 
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return ans;
    }
    public int[] searchRange(int[] nums, int target) {
        int n = nums.length;
        int lb = lowerBound(nums, n , target);
        if(lb == n || nums[lb] != target) return new int[] {-1, -1};
        return new int[]{lb, upperBound(nums, n, target) - 1};  
    }
}