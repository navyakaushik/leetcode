#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    // This function checks if Koko can eat all the bananas within the given hours `h`
    // when eating at a rate of `givenHour` bananas per hour.
    bool canEatAll(vector<int>& piles, int givenHour, int h) {
        int actualHour = 0; // Keeps track of the total hours taken to eat all bananas.

        // Iterate through each pile of bananas.
        for (int &x : piles) {
            // Add the number of hours required to eat all bananas from the current pile.
            actualHour += x / givenHour;

            // If there are leftover bananas in the pile after eating `givenHour` bananas,
            // Koko will need an extra hour to finish the rest.
            if (x % givenHour != 0) 
                actualHour++;
        }

        // Return true if the total hours required is less than or equal to `h`.
        return actualHour <= h;
    }

    // Main function to find the minimum eating speed `k` such that all bananas are eaten in `h` hours.
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size(); // Number of banana piles.

        // The minimum possible eating speed is 1 banana per hour.
        int l = 1;

        // The maximum possible eating speed is the size of the largest pile.
        int r = *max_element(begin(piles), end(piles));

        // Perform binary search to find the optimal eating speed.
        while (l < r) {
            // Calculate the middle speed in the current range.
            int mid = l + (r - l) / 2;

            // Check if Koko can eat all bananas at the current speed.
            if (canEatAll(piles, mid, h)) {
                // If yes, try reducing the eating speed.
                r = mid;
            } else {
                // Otherwise, increase the speed.
                l = mid + 1;
            }
        }

        // The left pointer `l` now holds the minimum eating speed.
        return l;
    }
};
