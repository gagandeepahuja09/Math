#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int const MOD = 1e9 + 7, N = 1e6 + 1;

signed main() {
    string s;
    cin >> s;
    int total = 0;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == 'v' && s[i - 1] == 'v') total++;
    }
    int cnt = 0, ans = 0;
    for(int i = 1; i < s.size(); i++) {
        if(s[i] == 'v' && s[i - 1] == 'v') cnt++;
        if(s[i] == 'o') {
            ans += (cnt * (total - cnt));
        }
    }
    cout << ans << endl;
}
