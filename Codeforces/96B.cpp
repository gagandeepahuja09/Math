#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main() {
    int n;
    cin >> n;
    int ans = 0, num = 2;
    while(n--) {
        ans += num;
        num *= 2;
    }
    cout << ans << endl;
}
