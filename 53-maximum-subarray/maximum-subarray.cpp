class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();
        // var for storing the max. sum of the subarray.
        int maxi = INT_MIN;
        // var for storing the sum.
        int sum = 0;

        // iterating inside of arr[nums] to get the the value of sum. and
        // maxi_sum.
        for (int i = 0; i < n; i++) {
            sum += nums[i];
            maxi = max(sum, maxi);

            // Kadane's logic : if sum < 0 then chage sum to 0;
            if (sum < 0) {
                sum = 0;
            }
        }
        // return maxi , at the end, to get the final answer.
        return maxi;
    }
};