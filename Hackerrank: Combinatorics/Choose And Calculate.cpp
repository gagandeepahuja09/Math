int solve(vector<int> A, int k) {
    ll ans = 0;
    sort(A.begin(), A.end());
    ll MOD = 1e9 + 7;
    int n = A.size();
    vector<ll> fac(n+1); 
    fac[0] = 1ll; 
    for (ll i=1 ; i<=n; i++) 
        fac[i] = fac[i-1]*i%MOD; 
    for(ll i = 0; i < A.size(); i++) {
        // Count maximums
        if(i >= k - 1)
            ans += ((ll)A[i] * nCr(fac, i, (ll)k - 1, MOD)) % MOD;
        if(n - i >= k) {
            ans = (ans - ((ll)A[i] * nCr(fac, n - i - 1, (ll)k - 1, MOD))); 
            if(ans < 0)
                ans += MOD;
            ans %= MOD;
        }
        ans %= MOD;   
    }
    return (int)ans;
}
