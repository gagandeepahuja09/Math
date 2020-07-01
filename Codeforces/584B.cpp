#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int const MOD = 1e9 + 7, N = 1e6 + 1;

int power(int x, int y) {
    if(y == 0)  return 1ll;
    int f = power(x, y / 2);
    if(y % 2)   return ((f * f) % MOD * x) % MOD;
    return (f * f) % MOD;
}

signed main() {
    int n;
    cin >> n;
    int ans = (power(27, n) - power(7, n) + MOD) % MOD;
    cout << ans << endl;
}
