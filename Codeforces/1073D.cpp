#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MX 100005

ll solve(vector<ll>& a, ll& sum, ll T) {
    ll cnt = 0;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] <= T) {
            T -= a[i];
            sum += a[i];
            cnt++;
        }
    }
    return cnt;
}

int main() {
    ll n, T, ans = 0, mn = INT_MAX;
    cin >> n >> T;
    vector<ll> a(n);
    for(ll i = 0; i < n; i++) {
        cin >> a[i];
        mn = min(mn, a[i]);
    }
    while(T >= mn) {
        ll sum = 0;
        ll cnt = solve(a, sum, T);
        ans += (cnt * (T / sum));
        T %= sum;
    }
    cout << ans << endl;
}
