class Solution {
public:
    int removeDuplicates(vector<int>& nums) {        // Time complexity of O(n) & Space complexity of O(n) , used extra space here coz we
       /* unordered_set<int>seen;                      // introduced HASH_SET here.
        int index = 0;
        for ( int num : nums) {
            if ( seen.find(num) == seen.end()){
                seen.insert(num);

                nums[index] = num;
                index ++;
            }
        }
        return index;  */

        if (nums.empty()) return 0;                   // Time complexity of O(n) & Space complexity of O(1) , no extra space utilized here so it's
        int i = 0;                                    // more optimal in terms of utilization of space.

        for ( int j = 1; j < nums.size(); j++){
            if ( nums[j] != nums[i]){
                i++;
                nums[i] = nums[j];
            }
        }
        return i+1;
    }
};