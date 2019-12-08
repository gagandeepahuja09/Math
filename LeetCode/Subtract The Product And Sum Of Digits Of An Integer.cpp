class Solution {
public:
    int subtractProductAndSum(int n) {
        string s = to_string(n);
        int prod = (s[0] - '0'), sum = prod;
        for(int i = 1; i < s.size(); i++) {
            sum += (s[i] - '0');
            prod *= (s[i] - '0');
        }
        \return prod - sum;
    }
};
