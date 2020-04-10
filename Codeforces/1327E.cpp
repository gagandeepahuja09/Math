#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 998244353

int main() {
    ll n;
    cin >> n;
    vector<ll> p(200002, 1);
    for(int i = 1; i < p.size(); i++) {
        p[i] = (p[i - 1] * 10) % MOD;
    }
    for(ll i = 1; i < n; i++) { 
        ll ans = ((9 % MOD * (p[n - i - 1] * 10) % MOD) % MOD * 2) % MOD;
        ans += ((9 * (9 * p[n - i - 2] * 10) % MOD) % MOD * (n - i - 1) % MOD) % MOD;
        ans %= MOD;
        cout << ans << " ";
    }
    cout << 10;
}
