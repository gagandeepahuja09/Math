#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int const MOD = 1e9 + 7, N = 1e6 + 1;

signed main() {
    int n, w;
    cin >> n >> w;
    int sum = 0, mx = 0, mn = INT_MAX;
    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;
        sum += x;
        mx = max(mx, sum);
        mn = min(mn, sum);
    }
    int l = 0, r = w;
    if(mn < 0) {
        l -= mn;
    }
    r -= mx;
    cout << max(0ll, r - l + 1);
}
