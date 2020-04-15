int solve(vector<int> c) {
    ll n = c.size(), MOD = 1e9 + 7;
    vector<ll> cnt(n + 1, 0);
    for(int i = 0; i < c.size(); i++) {
        cnt[c[i]]++;
    }
    ll curr = 0, ans = 1;
    for(int i = 0; i < c.size(); i++) {
        curr += cnt[i];
        ans = (ans % MOD * max(curr - i, 0ll) % MOD) % MOD;
    }
    return (int)ans;
}
