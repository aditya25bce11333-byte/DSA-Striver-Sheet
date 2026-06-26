class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector <pair<int,int>> indices;
        int n = nums.size();

        for ( int i =0; i<n; i++){
            indices.push_back ({nums[i],i});
        }
        sort (indices.begin() , indices.end());

        int i =0 , j = n-1;
        while ( i < j ){
            int sum = indices[i].first + indices[j].first;
            if ( sum == target ){
                return {indices[i].second , indices[j].second};
            } else if ( sum < target ){
                i++;
            } else {
                j--;
            }
        }
        return { -1 , -1 };   // NO PAIRS FOUND ! 
    }
};