class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxPro = 0; // Maximum profit
        int n = prices.size();
        int minPrice = INT_MAX; // Initialize to a very high value

        for (int i = 0; i < n; i++) {
            minPrice = min(minPrice, prices[i]); // Update the minimum price so far
            maxPro = max(maxPro, prices[i] - minPrice); // Calculate the max profit
        }

        return maxPro;
    }
};
