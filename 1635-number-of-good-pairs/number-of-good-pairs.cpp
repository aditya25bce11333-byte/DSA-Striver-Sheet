class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int> count;
        int ans = 0;

        for (int x : nums) {
            // checks if element x from nums arr , exists  in the hashmap.
            if (count.find(x) != count.end()) {
                ans += count[x];
            }
            // stores the frequency in hashmap by incrementing it for future checks;
            count[x]++;
        }
        return ans;
    }
};