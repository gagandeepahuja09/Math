#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>

const int MOD = 7901;

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n);
        vi fac(n + 1);
        fac[1] = 1;
        for(int i = 2; i <= n; i++) {
            fac[i] = (fac[i - 1] * i) % MOD;
        }
        map<int, int> mp;
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = 0; i < n; i++) {
            mp[a[i]]++;
        }
        int ans = 1;
        for(auto& i : mp) {
            ans *= fac[i.second];
            ans %= MOD;
        }
        cout << ans << endl;
    }
}
