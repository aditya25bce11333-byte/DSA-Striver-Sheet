class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();
        // setting up the pointers.
        int low = 0, high = n-1;
        while (low <= high){
            int mid = low + ( high - low )/ 2;
            // logic for calculating no. of missing elements till arr[mid].
            int missing = arr[mid] - (mid + 1);

            if (missing < k){
                low = mid + 1;
            } else {
                high = mid -1;
            }
        }
        return high + 1 + k;
        
    }
};