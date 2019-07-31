#define MOD 1000003
#define ll long long int

ll countRight(string s, int i) {
    ll c = 0;
    for(int j = i + 1; j < s.size(); j++) {
        if(s[j] < s[i])
            c = (c + 1) % MOD;
    }
    return c;
}

ll power(ll x, ll y) {
    if(y == 0)
        return 1;
    if(y % 2 == 0) {
        ll shortAns = power(x, y / 2);
        return (shortAns % MOD * shortAns % MOD) % MOD;
    }
    return (x % MOD * power(x, y - 1) % MOD) % MOD;
}

int Solution::findRank(string A) {
    ll n = A.size(), ret = 0;
    vector<ll> f(n + 1, 1);
    for(ll i = 1; i <= n; i++) {
        f[i] = (f[i - 1] % MOD * i % MOD) % MOD;
    }
    for(int i = 0; i < n; i++) {
        unordered_map<char,int> mp;
        ll cnt = countRight(A, i);
        for(int j = i; j < n; j++) {
            mp[A[j]] = (mp[A[j]] + 1) % MOD;
        }
        ll repeats = 1;
        for(auto it = mp.begin(); it != mp.end(); it++) {
            repeats = (repeats % MOD * f[it -> second] % MOD) % MOD;
        }
        ll curr = (f[n - i - 1] * cnt) % MOD;
        curr = (curr % MOD * power(repeats, MOD - 2) % MOD) % MOD;
        ret = ret % MOD + curr % MOD;
    }
    return (int)(ret);
}

