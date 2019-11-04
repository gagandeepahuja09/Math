#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define MAX 2002

ll n, k;

int main() {
    // ll t;
    // cin >> t; while(t--) {
    cin >> n >> k;
    ll cnt = 0, c1 = 0;
    for(ll i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            c1++; cnt++;
            if(i != n / i)
                cnt++;
        }
        if(c1 == k) {
            cout << i;
            return 0;
        }    
    }
    ll c = cnt;
    for(ll i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            if(c == k) {
                cout << n / i;
                return 0;
            }
            c--;
        }
    }
    cout << -1;
    // }
}
