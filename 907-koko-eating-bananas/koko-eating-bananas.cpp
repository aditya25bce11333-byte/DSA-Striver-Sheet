class Solution {
    //creating private function , so that it doesn't interact with the public function.
    // Also it aids in calculating total hours needed by monkey to finish the pile if the eating spped is k bananas/hour.
private:
    long long calculatetotalhours (vector<int>& piles , int k){
        long long totalH = 0;
        for (int bananas : piles){
            totalH += (long long)(bananas + k - 1) / k;    // shortcut method for floor division and rounding-off answers.
        }
        return totalH;
    }    
public:
//function inbuilt for calculating max banana in the pile for setting the high and low pointer for our search approach.
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxPile = 0;
        for ( int bananas : piles){
            maxPile = max(maxPile,bananas);
        }
        int low = 1 , high = maxPile;
        while ( low <= high ){
            int mid = low + (high-low)/2;
            
            // calculate total hours at a speed of mid.
            long long totalH = calculatetotalhours (piles , mid);
            //checking the condition.
            if (totalH <= h){
                high = mid-1;
            }else{
                low = mid +1;
            }
        }
        //at last when high crosses low , our low will point to minimum speed of eating bananas.
        return low;
    }
};