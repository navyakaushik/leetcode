class Solution {
    public int[] twoSum(int[] numbers, int target) {
        int n=numbers.length;
        
        int i=0;
        int j=n-1;
        
        while(i<j){
            int a=numbers[i];
            int b=numbers[j];
            
            if(a+b==target){
                return new int[] {i+1,j+1};
            }else if(a+b>target){
                j--;
            }else{
                i++;
            }
        }
        return new int[] {};

   
        
    }
}

