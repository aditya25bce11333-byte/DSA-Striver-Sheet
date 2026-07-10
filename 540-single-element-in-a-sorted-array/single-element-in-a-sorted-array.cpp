class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();

        // check for size of arr.
        if ( n == 1) return nums[0];
        // check for 1st element.
        if (nums[0] != nums[1] ) return nums[0];
        // check for last element.
        if (nums[n-1] != nums[n-2]) return nums[n-1];

        int low = 1 , high = n-2;   // excluding the 1st and the last element as we've alredy considered it.

        while ( low <= high ){
            int mid = (low+high) / 2;
            if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]){
                return nums[mid];
            }
            if ((mid % 2 == 0 && nums[mid] == nums[mid + 1]) || (mid % 2 == 1 && nums[mid] == nums[mid-1])){
                low = mid+1;
            }
            else {
                high = mid - 1;
            }
        }
        return -1; 
    }
};