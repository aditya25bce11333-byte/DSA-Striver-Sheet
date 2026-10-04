class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        // for storing condition or threshold value given as per question.
        int threshold = n / 3;
        // a hash map to store the values with there frequencies.
        unordered_map<int, int> frequency;
        // an empty vector to store the final answer.
        vector<int> answer;

        // iterating in the array nums to get the value of frequencies of the
        // elements and storing it as key , value pairs in hash map.
        for (int num : nums) {
            frequency[num]++;
        }
        // iterating in the hashmap to find whoose value is > n/3.
        for (const auto& pair : frequency) {
            if (pair.second > threshold) {
                // push back the key in that empty vector.
                answer.push_back(pair.first);
            }
            // that vector could have only 2 distinct elements.
            if (answer.size() == 2) {
                break;
            }
        }
        return answer;
    }
};