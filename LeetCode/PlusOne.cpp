class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        vector<int> ret;
        int carry = 1;
        for(int i = d.size() - 1; i >= 0; i--) {
            carry += d[i];
            ret.push_back(carry % 10);
            carry /= 10;
        }
        if(carry)
            ret.push_back(carry);
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
