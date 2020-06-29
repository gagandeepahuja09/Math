#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

// int power(int x, int y) {
//     if(y == 0)  return 1;
//     if(y % 2)   return x * power(y - 1);
//     int f = power(x, y / 2);
//     return f * f;
// }

const int MOD = 1e9 + 7;

signed main() {
    int t = 1;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vi a(n);
        for(int i = 0; i < n; i++)  cin >> a[i];
        sort(a.begin(), a.end());
        int ans = 1;
        for(int i = 0; i < n; i++) {
            int temp = a[i] - i;
            if(temp <= 0) {
                ans = 0;
                break;
            }
            ans *= temp;
            ans %= MOD;
        }
        cout << ans << endl;
    }
    cout << "KILL BATMAN" << endl;
}
