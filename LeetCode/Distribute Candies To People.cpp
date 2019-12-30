class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        vector<int> ret(n, 0);
        for(int i = 0; candies > 0; i++) {
            ret[i % n] += min(candies, i + 1);
            candies -= (i + 1);    
        }
        return ret;
    }
};
