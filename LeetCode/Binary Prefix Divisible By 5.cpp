class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> ret;
        int num = 0;
        for(int i = 0; i < A.size(); i++) {
            num = ((num * 2) % 5 + A[i]) % 5;
            ret.push_back(num == 0);
        }
        return ret;
    }
};
