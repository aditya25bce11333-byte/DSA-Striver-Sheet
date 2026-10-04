class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> res;
        
        if (n < 3) return res;
        
        // Sort the array to facilitate the two-pointer approach and duplicate skipping
        sort(nums.begin(), nums.end());
        
        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate values for the first element
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            // Optimization: If the smallest possible triplet sum is > 0, no valid triplet can exist
            if (nums[i] + nums[i + 1] + nums[i + 2] > 0) break;
            // Optimization: If the largest possible triplet sum with this 'i' is < 0, move to a larger 'i'
            if (nums[i] + nums[n - 2] + nums[n - 1] < 0) continue;
            
            int l = i + 1;
            int r = n - 1;
            
            while (l < r) {
                int sum = nums[i] + nums[l] + nums[r];
                
                if (sum > 0) {
                    r--;
                } else if (sum < 0) {
                    l++;
                } else {
                    res.push_back({nums[i], nums[l], nums[r]});
                    
                    // Advance pointers and immediately skip duplicate values
                    l++;
                    r--;
                    while (l < r && nums[l] == nums[l - 1]) l++;
                    while (l < r && nums[r] == nums[r + 1]) r--;
                }
            }
        }
        return res;
    }
};
