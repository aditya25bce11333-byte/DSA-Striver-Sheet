class Solution {
public:
    int findMin(vector<int>& nums) {
        int n = nums.size();
        int low = 0, high = n-1;

        while ( low < high ){
            int mid = low + (high-low)/2;

            // check if min lies in right side of mid.
            if (nums[mid] > nums[high]){
                low = mid + 1;
                // min. lies in the left side of mid (nums[mid] is inclusive).
            } else {
                high = mid;
            }
        }
        return nums[low];
    }
};