class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> major;

        //iterating inside the arr ( nums) to fill the major collection.
        for (int num:nums){
            major[num]++;
        }
        //iterating in the unoedered map.
        for (const auto& pair : major){
            if(pair.second > n/2)
            return pair.first;
        }
       return -1; 
    }
    
};