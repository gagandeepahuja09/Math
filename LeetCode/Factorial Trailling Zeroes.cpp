class Solution {
public:
    int trailingZeroes(int n) {
        long ans = 0;
        for(long i = 5; n / i >= 1; i *= 5) {
            ans += (n / i);
        }
        return (int)ans;
    }
};
