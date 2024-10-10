class Solution {
public:
    int findMax(vector<int>& piles){
        int maxi = INT_MIN;
        int n = piles.size();
        //maximum pile size
        for(int i = 0; i < n; i++){
            maxi = max(maxi, piles[i]);
        }
        return maxi;
    }
    long long calculateTotalHours(vector<int>& piles, int k) {
        long long totalH = 0;
        int n = piles.size();
        // total hours needed at a given rate
        for(int i = 0; i < n; i++){
            totalH += ceil((double)piles[i] / (double)k);
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h){
        int low = 1;
        int high = findMax(piles); //binary search bounds
        
        
        //binary serach to find maximum rate k
        while(low <= high){
            int mid = (low + high) / 2;
            long long totalH = calculateTotalHours(piles,mid);
            
            if(totalH <= h){
                // if koko can eat all bananas within h hours try a smaller rate 
                high = mid - 1;
            }else{
                //otherwise increase the rate to eat faster
                low = mid + 1;
            }
        }
        return low; // minimum rate k
    }
};