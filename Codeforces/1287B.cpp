#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main() {
    int t = 1;
    // cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int ans = 0;
        map<string, int> mp;
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {
                string temp;
                for(int k = 0; k < m; k++) {
                    if(v[i][k] == v[j][k])
                        temp += v[i][k];
                    else 
                        temp += ('S' + 'E' + 'T' - v[i][k] - v[j][k]);
                }
                ans += mp[temp];
            }
            mp[v[i]]++;
        }
        cout << ans << endl;
    }
	return 0;
}
