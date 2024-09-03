class Solution{
    public int[] rearrangeArray(int[] nums){
        int n = nums.length;
        
        //Define lists for storing positive and negative elements seperately
        ArrayList<Integer> pos = new ArrayList<>();
        ArrayList<Integer> neg = new ArrayList<>();
        
        //segregate the input array into positive and negative numbers
        for(int i = 0; i < n; i++){
            if(nums[i] > 0){
                pos.add(nums[i]);
            }else{
                neg.add(nums[i]);
            }
        }
        //result array
        
        int[] ans = new int[n];
        int posIndex = 0, negIndex = 1;
        
        for(int i = 0; i < pos.size(); i++){
            ans[posIndex] = pos.get(i);
            ans[negIndex] = neg.get(i);
            posIndex += 2;
            negIndex += 2;
        }
        return ans;
    }
}