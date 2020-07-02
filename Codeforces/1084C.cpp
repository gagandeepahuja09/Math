#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int const MOD = 1e9 + 7, N = 1e6 + 1;

int power(int x, int y) {
    if(y == 0)  return 1ll;
    int f = power(x, y / 2);
    if(y % 2)   return ((f * f) % MOD * x) % MOD;
    return (f * f) % MOD;
}

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        string s;
        cin >> s;
        string temp;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == 'a' || s[i] == 'b')  temp += s[i];
        }
        int ans = 1;
        for(int i = 0; i < temp.size(); ) {
            if(temp[i] == 'b') {
                i++;
                continue;
            }
            int cnt = 0;
            while(i < temp.size() && temp[i] == 'a') {
                i++;
                cnt++;
            }
            (ans *= (cnt + 1)) %= MOD;
        }
        ans = (ans - 1 + MOD) % MOD;
        cout << ans << endl;
    }
}
