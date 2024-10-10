#include <vector>
#include <algorithm> // for min_element, max_element
using namespace std;

class Solution {
public:
    // Function to calculate the minimum number of days to make 'm' bouquets
    int minDays(vector<int>& bloomDay, int m, int k) {
        // If it's impossible to make m bouquets with k flowers from n flowers
        if (bloomDay.size() < static_cast<long long>(m) * k)
            return -1;

        // Find the minimum and maximum days from bloomDay
        int l = *min_element(bloomDay.begin(), bloomDay.end());
        int r = *max_element(bloomDay.begin(), bloomDay.end());

        // Perform binary search to find the minimum day
        while (l < r) {
            int mid = l + (r - l) / 2;
            if (getBouquetCount(bloomDay, k, mid) >= m)
                r = mid; // We try for earlier days
            else
                l = mid + 1; // We try for later days
        }

        return l;
    }

private:
    // Returns the number of bouquets that can be made with k adjacent flowers on or before `waitingDays`
    int getBouquetCount(const vector<int>& bloomDay, int k, int waitingDays) {
        int bouquetCount = 0;
        int requiredFlowers = k;

        for (int day : bloomDay) {
            if (day > waitingDays) {
                // If the flower hasn't bloomed, reset the required flowers count
                requiredFlowers = k;
            } else if (--requiredFlowers == 0) {
                // If k adjacent flowers can be used to make a bouquet
                bouquetCount++;
                requiredFlowers = k; // Reset the required flowers count for the next bouquet
            }
        }

        return bouquetCount;
    }
};
