#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int const MOD = 1e9 + 7, N = 1e6 + 1;

signed main() {
    int n, m;
    cin >> n >> m;
    map<string, int> mp;
    vector<string> vs(n);
    for(int i = 0; i < n; i++) {
        cin >> vs[i];
    }
    int ans = 1;
    for(int j = 0; j < m; j++) {
        map<char, int> mp;
        for(int i = 0; i < n; i++) {
            mp[vs[i][j]]++;
        }
        ans *= mp.size();
        ans %= MOD;
    }
    cout << ans << endl;
}
