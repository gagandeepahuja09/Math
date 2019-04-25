#define ll long long int
#define MOD 1000003

int fact(int n) {
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int Solution::findRank(string A) {
    vector<int> cnt(256, 0);
    for(int i = 0; i < A.size(); i++)
        cnt[A[i]]++;
    for(int i = 1; i < 256; i++)
        cnt[i] += cnt[i - 1];
    int l = A.size();
    int mul = fact(l);   
    ll rank = 1;
    for(int i = 0; i < l; i++) {
        mul /= (l - i);
        rank = (rank % MOD + (cnt[A[i] - 1] % MOD * mul % MOD) % MOD) % MOD;
        for(int k = A[i]; k < 256; k++)
            cnt[k]--;
    }
    return (int)rank % MOD;
}
