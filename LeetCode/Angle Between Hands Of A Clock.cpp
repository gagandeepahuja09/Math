class Solution {
public:
    double angleClock(int h, int m) {
        double hr = h;
        hr *= 5;
        hr += (double)((double)m / 12);
        double ans = abs((double)(6 * (hr - (double)m)));
        return (double)min(ans, (double)360 - ans);
    }
};
