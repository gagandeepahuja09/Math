#define MOD 1000003
#define ll long long int

ll findSmallerInRight(string s, int l, int h) {
    int cntRight = 0;
    for(int i = l + 1; i <= h; i++) {
        if(s[i] < s[l])
            cntRight++;
    }
    return cntRight;
}

int Solution::findRank(string A) {
    ll n = A.size();
    int fact[n + 1];
    fact[0] = 1;
    for(int i = 1; i <= n; i++) {
        fact[i]  = ((fact[i - 1]) * (i) )%MOD;
    }
    ll rank = 0;
    for(int i = 0; i < A.size(); i++) {
        ll mul = fact[n - i - 1];
        ll cntRight = findSmallerInRight(A, i, n - 1);
        rank = (rank % MOD + (cntRight % MOD * mul % MOD) % MOD) % MOD;
    }
    return (int)(rank + 1);
}

