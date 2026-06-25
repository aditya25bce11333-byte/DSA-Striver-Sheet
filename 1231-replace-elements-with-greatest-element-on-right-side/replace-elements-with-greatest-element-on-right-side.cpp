class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        /*int n = arr.size();                                                               // using NESTED LOOPS , T.C = O(N^2);

        for (int i = 0; i < n - 1; i++) {
            int max_element = -1;
            for (int j = i + 1; j < n; j++) {
                max_element = max(max_element, arr[j]);
            }
            arr[i] = max_value;
        }
        arr[n - 1] = -1;
        return arr;*/
        
        int n = arr.size();                                                                // OPTIMAL SOLUTION = iterating backward , T.C = o(n);
        int max_current = -1;

        for (int i = n - 1; i >= 0; i--) {
            int current_element = arr[i];
            arr[i] = max_current;
            max_current = max(max_current, current_element);
        }
        return arr;
    }
};