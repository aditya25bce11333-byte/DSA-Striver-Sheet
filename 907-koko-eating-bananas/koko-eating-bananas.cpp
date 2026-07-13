class Solution {
private :
    long long calculatetotalhours(vector<int>& piles , int k){
        long long TotalH = 0;
        for (int bananas : piles){
            TotalH += (bananas + k - 1) / k;
        }
        return TotalH;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = 0;
        for (int bananas : piles){
            maxPile = max (maxPile , bananas);
            int ans = maxPile;
        }
        int low = 1  , high = maxPile;
        while ( low <= high){
            int mid = low + (high-low)/2;

            long long TotalH = calculatetotalhours(piles,mid);

            if (TotalH <= h) {
                int ans = mid;
                high = mid-1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};