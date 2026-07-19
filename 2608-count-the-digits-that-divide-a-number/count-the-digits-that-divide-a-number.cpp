class Solution {
public:
    int countDigits(int num) {
        int counter = 0;
        int temp = num;

        while (temp > 0) {
            int digit = temp % 10;
            if (digit != 0 && num % digit == 0) {
                counter++;
            }
            temp /= 10;
        }
        return counter;
    }
};