class Solution {
public:
    vector<int> addNegabinary(vector<int>& a1, vector<int>& a2) {
        int i = a1.size() - 1, j = a2.size() - 1, carry = 0;
        vector<int> ret;
        while(i >= 0 || j >= 0 || carry) {
            if(i >= 0)
                carry += a1[i--];
            if(j >= 0)
                carry += a2[j--];
            ret.push_back(carry & 1);
            carry = -(carry >> 1);
        }
        while(ret.size() > 1 && ret.back() == 0)
            ret.pop_back();    
        reverse(ret.begin(), ret.end());
        return ret;
    }
};
