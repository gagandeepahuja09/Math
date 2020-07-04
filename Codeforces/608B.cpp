#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>

signed main() {
    string a, b;
    cin >> a >> b;
    int n = a.size(), m = b.size();
    vi cnt(m);
    for(int i = 0; i < m; i++) {
        if(i >= 1)  cnt[i] += cnt[i - 1];
        if(b[i] == '1') cnt[i]++;
        // cout << cnt[i] << " ";
    }
    int sum = cnt[m - n], ans = 0;
    for(int i = 0; i < n; i++) {
        int end = (m - n + i);
        int start = end - (m - n);
        if(a[i] == '0')
            ans += sum;
        else
            ans += ((m -n + 1) - sum);
        // cout << sum << endl;
        if(i < n - 1) {
            // cout << start << " ";
            if(b[start] == '1') sum--;
            if(b[end + 1] == '1')   sum++;
        }
    }
    cout << ans;
}
