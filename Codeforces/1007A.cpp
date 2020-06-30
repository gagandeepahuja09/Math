#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int const MOD = 998244353, N = 1e6 + 1;
int eq, sum;

signed main() {
    int n, d;
    cin >> n >> d;
    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    int j = 0, ans = 0, pi = -1, pj = -1, pos = j;
    for(int i = 0; i < n; i++) {
        while(j < n && a[i] - a[j] > d) {
            j++;
        }
        if(i - j >= 2 && a[i] - a[j] <= d) {
            int len = (i - j + 1);
            int curr = (len * (len - 1) * (len - 2)) / 6;
            ans += curr;
            if(pi >= 0 && pi - j >= 2) {
                int smaller = (pi - j + 1);
                ans -= (smaller * (smaller - 1) * (smaller - 2)) / 6;
            }
            pi = i;
            pj = j;
        }
    }
    cout << ans << endl;
}
