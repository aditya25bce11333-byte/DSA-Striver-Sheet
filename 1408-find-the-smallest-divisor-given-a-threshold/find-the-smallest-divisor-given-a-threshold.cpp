class Solution {
private:
// helper function for finding the sum when every element is divided by trial div.
    int DivisionSum(vector<int>& nums, int div) {
        int sum = 0;
        for (int i = 0; i < nums.size(); i++) {
            sum += ceil((double)nums[i] / div);
        }
        return sum;
    }

public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        if (nums.size() > threshold)
            return -1;

        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (DivisionSum(nums, mid) <= threshold) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};