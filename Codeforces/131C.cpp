#include<bits/stdc++.h>
using namespace std;

#define ll long long int
 

ll C(ll n, ll r) { 
    ll f = 1;
    for(ll i = 0; i < r; i++) {
        f *= (n - i);
        f /= (i + 1);
    }
    return f;
}
 
int main() {
    ll n, m, t, MOD = 1e9 + 7;
    ll ans = 0;
    cin >> n >> m >> t;
    // Can't use precomputed factorial because of ll overflow
    // vector<ll> fac(32, 1);
    // for(ll i = 1; i < 32; i++) {
    //    fac[i] = fac[i - 1] * i;
    // }
    for(ll b = 4; b <= n; b++) {
        ll g = (t - b);
        if(g < 1)
            continue;
        ans += C(n, b) * C(m, g);
    }
    cout << ans;
}
