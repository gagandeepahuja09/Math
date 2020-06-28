    #include<bits/stdc++.h>
    using namespace std;
     
    #define int long long int
    #define vi vector<int>
     
    const int MOD = 998244353;
     
    signed main() {
        int t = 1;
        //cin >> t;
        while(t--) {
            int n, m;
            cin >> n >> m;
            int ans = 1;
            while(n--)  ans = (ans * 2) % MOD;
            while(m--)  ans = (ans * 2) % MOD;
            cout << ans << endl;
        }
    }
