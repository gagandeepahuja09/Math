class Solution {
public:
    int maxAbsValExpr(vector<int>& a1, vector<int>& a2) {
        int n = a1.size();
        int mxsum1, mxsum2, mxdiff1, mxdiff2, mnsum1, mnsum2, mndiff1, mndiff2;
        mxsum1 = mxsum2 = mxdiff1 = mxdiff2 = INT_MIN;
        mnsum1 = mnsum2 = mndiff1 = mndiff2 = INT_MAX;
        for(int i = 0; i < n; i++) {
            int sum1 = a1[i] + a2[i] + i;
            mxsum1 = max(mxsum1, sum1); mnsum1 = min(mnsum1, sum1);
            int sum2 = a1[i] + a2[i] - i;
            mxsum2 = max(mxsum2, sum2); mnsum2 = min(mnsum2, sum2);
            int diff1 = a1[i] - a2[i] + i;
            mxdiff1 = max(mxdiff1, diff1); mndiff1 = min(mndiff1, diff1);
            int diff2 = a1[i] - a2[i] - i;
            mxdiff2 = max(mxdiff2, diff2); mndiff2 = min(mndiff2, diff2);
        }
        int ans = mxsum1 - mnsum1;
        ans = max(ans, mxsum2 - mnsum2);
        ans = max(ans, mxdiff1 - mndiff1);
        ans = max(ans, mxdiff2 - mndiff2);
        return ans;
    }
};
