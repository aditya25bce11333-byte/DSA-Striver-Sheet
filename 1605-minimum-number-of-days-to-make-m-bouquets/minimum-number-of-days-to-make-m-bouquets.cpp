class Solution {
private:
    int canMakebouquets(vector<int>& bloomDay, int m, int k, int days) {
        int bouquetsCreated = 0;
        int consecutiveFlowers = 0;
        for (int i = 0; i < bloomDay.size(); i++) {
            if (bloomDay[i] <= days) {
                consecutiveFlowers++;
                if (consecutiveFlowers == k) {
                    bouquetsCreated++;
                    consecutiveFlowers = 0;
                }
            } else {
                consecutiveFlowers = 0;
            }
            if (bouquetsCreated >= m) {
                return true;
            }
        }
        return bouquetsCreated >= m;
    }

public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        if ((long long)m * k > bloomDay.size()) {
            return -1;
        }
        int maxi = *max_element(bloomDay.begin(), bloomDay.end());
        int mini = *min_element(bloomDay.begin(), bloomDay.end());
        int ans = -1;

        int low = mini, high = maxi;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canMakebouquets(bloomDay, m, k, mid)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};