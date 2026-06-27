class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // variable for storing the maximum sum.
        long long maxi = LLONG_MIN;
        // varible for storing the value of sum.
        long long sum = 0;
        // iterating the arr , for storing the value of sum of its elements.
        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            // evaluates the maximum value of the sum of elements.
            maxi = max(maxi, sum);

            if (sum < 0) {
                sum = 0;
            }
        }
        return maxi;
    }
};