class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        // setting up the index for  1st non-zero element in the input arr.
        int j = -1;
        // iterating via the input arr for finding the index of 1st non-zero element.
        for (int i = 0; i<nums.size(); i++){
            if (nums[i] == 0){
                j = i;
                break;
            }
        }
        // if no non-zero element in input arr , then int j stays as -1;
        if (j == -1) return;
        // iterate in the input arr , from index just ahead the index of 1st non-zero element.
        for (int i = j+1; i < nums.size(); i++){
            if ( nums[i] != 0 ){
                swap (nums[i],nums[j]);
                j++;
            }
        }
        
    }
};