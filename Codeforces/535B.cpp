#include <bits/stdc++.h>
using namespace std;

#define int long long int

signed main() {
    int n;
    cin >> n;
    int curr = 1, ans = 0;
    while(n) {
        if(n % 10 == 7) {
            ans += (curr * 2);
        }
        else {
            ans += curr;
        }
        curr *= 2;
        n /= 10;
    }
    cout << ans << endl;
}
