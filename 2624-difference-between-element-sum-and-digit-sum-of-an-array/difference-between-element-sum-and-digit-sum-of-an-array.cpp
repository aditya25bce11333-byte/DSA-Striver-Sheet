class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int element_sum = 0;
        int digit_sum = 0;
        // for element sum.
        for ( int i = 0; i < nums.size(); i++ ){
            element_sum += nums[i];
        while (nums[i] > 9){
        // for digits sum.
            int digit = nums[i] % 10;
            digit_sum += digit;
            nums[i] /= 10;
        }
        digit_sum += nums[i]; 
    }
    return abs (element_sum - digit_sum);
    }
};