#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        int mx = INT_MIN;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        vector<ll> divs(mx + 1, 0), dp(mx + 1, 0);
        for(int i = 0; i < n; i++) {
            for(int j = 1; j * j <= a[i]; j++) {
                if(a[i] % j == 0) {
                    divs[j]++;
                    if(j != a[i] / j) {
                        divs[a[i] / j]++;
                    }
                }
            }
        }
        ll ans = 0;
        for(int i = mx; i >= k; i--) {
            dp[i] = (divs[i] * (divs[i] - 1)) / 2;
            for(int j = 2 * i; j <= mx; j += i) {
                dp[i] -= dp[j];
            }
            ans += dp[i];
        }
        cout << ans << endl;
    }
	return 0;
}
