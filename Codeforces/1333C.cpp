#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> a(n);
    map<long long, long long> mp;
    mp[0] = (long)0;
    long long sum = 0, mx = 0, ans = 0;
    for(long long i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
        if(mp.find(sum) != mp.end()) {
            mx = max(mx, mp[sum] + 1);
        }
        mp[sum] = i + 1;
        ans += (i + 1 - mx);
    }
    cout << ans << endl;
}
