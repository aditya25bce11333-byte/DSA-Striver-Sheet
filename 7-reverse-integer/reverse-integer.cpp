class Solution {
public:
    int reverse(int x) {
        int ans = 0;            // Variable for holding the final reversed number.

        while (x != 0){
            int digit = x % 10;        // gets the last digit at ones place of integer 'x'.

            if ((ans > INT_MAX/10) || (ans < INT_MIN/10)) {
                return 0;
            }

            ans = ans * 10 + digit;                       //appends the digits to the reversed number.
            x = x/10;                                     // removes the last digit of x
        }
        return ans;                                   // return the reversed number.   
    }
};