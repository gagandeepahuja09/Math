#define ll long long int
#define MOD 1000003

ll countRight(string s, int i) {
    ll c = 0;
    for(int j = i + 1; j < s.size(); j++) {
        if(s[j] < s[i])
            c++;
    }
    return c;
}

int Solution::findRank(string A) {
    ll n = A.size(), ret = 0;
    ll f[n + 1];
    f[0] = 1;
    for(int i = 1; i <= n; i++) {
        f[i] = (f[i - 1] % MOD * i % MOD) % MOD;
    }
    for(int i = 0; i < n; i++) {
        ll cnt  = countRight(A, i), fact = f[n - i - 1];
        ret = ret % MOD + (cnt % MOD * fact % MOD) % MOD;
    }
    return int((ret + 1));
}

