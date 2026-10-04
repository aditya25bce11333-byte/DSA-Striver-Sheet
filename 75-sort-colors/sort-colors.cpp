class Solution {
public:
    void sortColors(vector<int>& nums) {

        // DUTCH NATIONAL FLAG ALGORITHM.

        int n = nums.size();
        //for all 0's.
        int left = 0;
        int current = 0;
        int right = n-1;

        //Loop should run till current <= Right.
        while (current <= right){
            if (nums[current] == 0){
                swap (nums[left],nums[current]);
                left++;
                current++;
            }else if (nums[current] == 1){
                current++;
            } else {
                swap(nums[current],nums[right]);
                right--;
            }
        }   
    }
};