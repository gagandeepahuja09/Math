#include<bits/stdc++.h>
using namespace std;

#define ll long long int

ll dp[1002][1002];
 
int main() {
    ll k, MOD = 1e9 + 7;
    cin >> k;
    memset(dp, 0, sizeof dp);
    dp[0][0] = 1;
    for(ll i = 1; i <= 1001; i++) {
        dp[i][0] = 1;
        for(ll j = 1; j <= i; j++) {
            dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
        }
    }
    ll sum = 0;
    ll ans = 1;
    for(ll i = 0; i < k; i++) {
        ll x; cin >> x;
        sum += x;
        ans = (ans * dp[sum - 1][x - 1]) % MOD;
    }
    cout << ans;
}
