class Solution {
public:
    int findNthDigit(int n) {
        long digits = 1, base = 9;
        while(n - base * digits > 0) {
            n -= (base * digits);
            base *= 10;
            digits++;
        }
        int offset = (n - 1) / digits;
        int index = (n - 1) % digits;
        string numStr = to_string(pow(10, digits - 1) + offset);
        return numStr[index] - '0';
    }
};
