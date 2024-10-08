
class Solution {
public:
    // Calculate the minimum number of days to make 'm' bouquets
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();
        // If it's impossible to make m bouquets with k flowers
        if (1LL * m * k > n) return -1;  // Use 1LL to prevent overflow

        // Find the minimum and maximum days from bloomDay
        int low = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        // Binary search to find the minimum day
        while (low < high) {
            int mid = low + (high - low) / 2;
            if (getBouquetCount(bloomDay, k, mid) >= m)
                high = mid;  // We try for earlier days
            else
                low = mid + 1;  // We try for later days
        }

        return low;
    }

private:
    // Returns the number of bouquets that can be made with k adjacent flowers on or before `waitingDays`
    int getBouquetCount(const vector<int>& bloomDay, int k, int waitingDays) {
        int bouquetCount = 0;
        int adjacentFlowers = 0;

        for (int day : bloomDay) {
            if (day <= waitingDays) {
                // This flower bloomed, count it
                adjacentFlowers++;
                if (adjacentFlowers == k) {
                    // We have enough flowers to make a bouquet
                    bouquetCount++;
                    adjacentFlowers = 0; // Reset for the next bouquet
                }
            } else {
                adjacentFlowers = 0; // Reset if the flower hasn't bloomed
            }
        }

        return bouquetCount;
    }
};
