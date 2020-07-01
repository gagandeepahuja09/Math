#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int const MOD = 1e9 + 7, N = 1e6 + 1;

signed main() {
    int n;
    cin >> n;
    vi a(n);
    int cnt = 0, ans = 0, total = n * (n + 1) / 2;
    vi c(2);
    c[0] = 1, c[1] = 0; 
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        if(a[i] < 0) {
            cnt = (cnt + 1) % 2;
        }
        c[cnt]++;
        // cout << cnt << " " << c[1 - cnt] << endl;
        ans += (c[1 - cnt]);
    }
    cout << ans << " " << total - ans << endl;
}
