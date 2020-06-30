#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int const MOD = 998244353, N = 1e6 + 1;
int eq, sum;

signed main() {
    int n, k;
    cin >> n >> k;
    vi a(n);
    int pos = -1;
    int ans = 1, mx = 0;
    for(int i = 0; i < n; i++)  {
        cin >> a[i];
        if(a[i] >= n - k + 1) {
            mx += a[i];
            if(pos != -1) {
                ans *= (i - pos);
                ans %= MOD;
            }
            pos = i;
        }
    }
    cout << mx << " " << ans << endl;
}
