class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& A, int L, int R) {
        int n = A.size(), cr = 0, cl = 0, ans = 0;
        for(int i : A) {
            if(i < L)
                cl++;
            else
                cl = 0;
            if(i <= R)
                cr++;
            else
                cr = 0;
            ans += (cr - cl);
        }
        return ans;
    }
};
