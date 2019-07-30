#define MOD 1000000007

int Solution::hammingDistance(const vector<int> &A) {
    long ret = 0;
    for(int j = 0; j < 32; j++) {
        long c0 = 0, c1 = 0;
        for(int i = 0; i < A.size(); i++) {
            if((A[i] & (1 << j)) == 0)
                c0++;
            else
                c1++;
        }
        ret = (ret % MOD + (2 * c0 % MOD * c1 % MOD) % MOD) % MOD;
    }
    return (int)(ret % MOD);
}

