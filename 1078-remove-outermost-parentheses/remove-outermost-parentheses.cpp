class Solution {
public:
    string removeOuterParentheses(string s) {
        string result = ""; // empty string created to store the final answer.
        int opened = 0;     // tracks the current nesting depth.

        for (char c : s) {
            if (c == '(') {
                // this means '(' lies inside another '(' .
                if (opened > 0) {
                    result += c;
                }
                opened++;
            } else {
                opened--;
                if (opened > 0) {
                    result += c;
                }
            }
        }
        return result;
    }
};