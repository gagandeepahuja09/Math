#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MAXN 10000002

ll pos[MAXN];

int main() {
    int n;
    cin >> n;
    ll ans = 1e16;
    pair<ll, ll> xy;
    memset(pos, 0, sizeof pos);
    for(int i = 1; i <= n; i++) {
        int a;
        cin >> a;
        if(pos[a]) {
            if(a < ans) {
                ans = a;
                xy.first = pos[a];
                xy.second = i;
            }
        }
        pos[a] = i;
    }
    for(ll gcd = 1; gcd < MAXN; gcd++) {
        ll x, y, first, second, curr = 1e16;
        first = second = x = y = 0;
        for(ll j = gcd; j < MAXN; j += gcd) {
            if(pos[j] && first) {
                second = pos[j];
                y = j;
            }
            else if(pos[j]) {
                first = pos[j];
                x = j;
            }
            if(first && second)
                break;
        }
        if(first && second)
            curr = (x * y) / gcd;
        if(curr < ans) {
            ans = curr;
            xy.first = min(first, second);
            xy.second = max(first, second);
        }    
    }
    cout << xy.first << " " << xy.second;
}
