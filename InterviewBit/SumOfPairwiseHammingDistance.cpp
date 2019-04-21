#define MOD 1000000007

int Solution::hammingDistance(const vector<int> &A) {
    int ans = 0;
    for(int i = 0; i < 32; i++) {
        int cnt = 0;
        for(int j = 0; j < A.size(); j++) {
            if(A[j] & (1 << i))
                cnt++;
        }
        ans =  (ans % MOD + (2 * cnt % MOD * (A.size() % MOD - cnt % MOD) % MOD) % MOD);
    }
    return ans;
}

