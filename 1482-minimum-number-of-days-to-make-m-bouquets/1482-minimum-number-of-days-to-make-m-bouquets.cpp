class Solution {
public:

    bool canMakeBouq(vector<int>& bloomDay, int mid, int k, int m){
        int bouqCount = 0;
        int consecutive_count = 0;

        for(int i = 0; i < bloomDay.size(); i++){
            if(bloomDay[i] <= mid){
                consecutive_count ++;
            } else{
                consecutive_count = 0;
            }
            if ( consecutive_count == k){
                bouqCount++;
                consecutive_count = 0;
            }
        }
        return bouqCount >= m;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {

        int n = bloomDay.size();
        int start_day = 0;
        int end_day = *max_element(begin(bloomDay), end(bloomDay));

        int min_days = -1;

        while(start_day <= end_day){
            int mid = start_day + (end_day - start_day) / 2;
            if(canMakeBouq(bloomDay, mid, k,m)){
                min_days = mid;
                end_day = mid - 1; 
            } else {
                start_day = mid + 1;
            }
        }
        return min_days;
        
    }
};