#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int const MOD = 998244353, N = 1e6 + 1;
int eq, sum;

signed main() {
    int n, ans = 1;
    cin >> n;
    vi a(n);
    int pos = -1;
    bool flag = false;
    for(int i = 0; i < n; i++)  cin >> a[i];
    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            flag = true;
            if(pos != -1)
                ans *= (i - pos);
            pos = i;
        }
    }
    if(flag)
        cout << ans << endl;
    else
        cout << 0 << endl;
}
