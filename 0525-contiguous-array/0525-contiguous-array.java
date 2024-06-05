class Solution{
    public int findMaxLength(int[] nums){
        Map<Integer, Integer> sumTracker = new HashMap<>();
        int maxLen = 0;
        int sum = 0;
        sumTracker.put(0, -1);
        for(int i = 0; i < nums.length; i++)
        {
            sum+= (nums[i] == 0)? 1 : -1;
            if(sumTracker.containsKey(sum))
                maxLen = Math.max( i - sumTracker.get(sum), maxLen);
            else
                sumTracker.put(sum, i);

        }
        return maxLen;
    }
}
