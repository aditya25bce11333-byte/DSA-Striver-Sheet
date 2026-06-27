class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,int> major;
        //Storing the frequencies of each element in the major map created.
        for(int num : nums) {
            major[num]++;
        }
        //Iterating in the hash map (major) to chech our conditional statement.
        for (auto& pair:major){
            if (pair.second > n/2){
                return pair.first;
            }
        }
        return -1;  
    }
};