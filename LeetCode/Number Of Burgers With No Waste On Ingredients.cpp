class Solution {
public:
    vector<int> numOfBurgers(int t, int c) {
        if(t % 2) {
            return {};
        }
        int x = (2 * c) - (t / 2);
        int y = (t / 2) - c;
        if(x < 0 || y < 0) {
            return {};
        }
        return { y, x };
    }
};
