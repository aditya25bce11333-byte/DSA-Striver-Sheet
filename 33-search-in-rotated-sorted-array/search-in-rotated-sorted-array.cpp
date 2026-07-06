class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target)
                return mid;

            // check if right half is sorted.
            if (nums[high] > nums[mid]) {
                // check if target lies is sorted right half.
                if (nums[high] >= target && target > nums[mid]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }

            // otherwise left side sorted.
            else {
                // check if target lies in sorted left side.
                if (nums[mid] > target && target >= nums[low]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            }
        }
        // if not found.
        return -1;
    }
};