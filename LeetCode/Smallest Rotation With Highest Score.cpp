class Solution {
public:
    int bestRotation(vector<int>& A) {
        int n = A.size();
        vector<int> bad(n, 0);
        for(int i = 0; i < n; i++) {
            int left = (i - A[i] + 1 + n) % n;
            int right = (i + 1) % n;
            bad[left]--;
            bad[right]++;
            if(left > right)
                bad[0]--;
        }
        int best = bad[0], ans = 0;
        for(int i = 1; i < n; i++) {
            bad[i] += bad[i - 1];
            if(bad[i] > best) {
                best = bad[i];
                ans = i;
            }
        }
        return ans;
    }
};
