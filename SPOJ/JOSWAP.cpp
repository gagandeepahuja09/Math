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
        map<int, int> mp;
        for(int i = 0; i < n; i++)  cin >> a[i];
        for(int i = 0; i < n; i++) {
            mp[a[i]]++;
        }
        int ans = n * (n - 1) / 2;
        bool swaps = false;
        for(auto& i : mp) {
            if(i.second >= 2) {
                swaps = true;
            }
            ans -= (i.second * (i.second - 1)) / 2;
        }
        cout << ans + swaps << endl;
    }
}
