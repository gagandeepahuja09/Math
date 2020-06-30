#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int const MOD = 1000000007, N = 1e6 + 1;

signed main() {
    int ans = 0;
    string s;
    cin >> s;
    int num = s.size(), sub = 1;
    // 4 - 1 * 10 + 3, 33 - 11 * 10 + 2
    for(int i = s.size() - 1; i >= 0; i--) {
        int val = s[i] - '0';
        ans = (ans + (val * num) % MOD) % MOD;
        num = (num - sub + MOD) % MOD;
        num = (num * 10 + i) % MOD;
        sub = (sub * 10 + 1) % MOD;
    }
    cout << ans << endl;
}
