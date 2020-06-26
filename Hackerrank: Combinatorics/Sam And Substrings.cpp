#include <bits/stdc++.h>
using namespace std;

#define int long long int

const int MOD = 1e9 + 7;

signed main()
{
    string s;
    cin >> s;
    int num = s.size(), ans = 0, sub = 1, add = s.size() - 1;
    for(int i = s.size() - 1; i >= 0; i--) {
        int val = s[i] - '0';
        ans = (ans + (val * num)) % MOD;
        num = ((num - sub + MOD) * 10) % MOD;
        num = (num + add) % MOD;
        add = (add - 1 + MOD) % MOD;
        sub = (sub * 10 + 1) % MOD;
    }
    cout << ans << endl;
    return 0;
}
