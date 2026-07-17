class Solution {
private:
// private function for calculating no. of days required if the trial capacity is there.
    int requiredNoofDays(vector<int>& weights,int capacity){
        int days = 1;
        int currentload = 0;
        for (int w : weights){
            // if the weight on ship > capacity.
            if ( currentload + w > capacity){
                // wait for the next day.
                days++;
                // start the current load from w , the very next day.
                currentload = w;
            } else {
                // if currentload doesnt exceedeed the capacity of the ship , add that weight w to currentload.
                currentload += w;
             }
        }
        return days;
    }    
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int left = *max_element(weights.begin(),weights.end());
        // accumulate gives sum of all elements , just add a '0' at the end.
        int right = accumulate(weights.begin(),weights.end(),0);
        while ( left < right){
            int mid = left + ( right - left) / 2;

            int daysrequired =  requiredNoofDays(weights,mid);
            if (daysrequired <= days){
                right = mid;
            } else {
                left = mid + 1;
            }
        }
        return left;
    }
};