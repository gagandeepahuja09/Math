#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define ll long long int

ll power(ll x, ll y, ll p) { 
    ll res = 1;
    x = x % p;
  
    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 
  
        y = y>>1; 
        x = (x*x) % p; 
    } 
    return res; 
} 
  
ll modInverse(int n, int p) { 
    return power(n, p-2, p); 
} 

ll nCr(vector<ll>& fac, ll n, ll r, ll p) { 
    if (r==0) 
      return 1; 
    return (fac[n]* modInverse(fac[r], p) % p * 
            modInverse(fac[n-r], p) % p) % p; 
}

ll f(ll a, ll b, ll MOD) {
    vector<ll> fac(52);
    fac[0] = 1ll;
    for(int i = 1; i <= 51; i++) {
        fac[i] = (fac[i - 1] * i) % MOD;
        // cout << fac[i] << " ";
    }
    if(a < b)
        return f(b, a, MOD);
    if(a < 25)
        return 0;
    if(a > 25 && a - b != 2)
        return 0;
    if(a == 25) {
        if(b > 23)
            return 0;
        ll ans = nCr(fac, a + b - 1, b, MOD);
        return ans;
    }
    return nCr(fac, 48ll, 24ll, MOD) + (1 << (b - 24));
}

int main() {
    ll a, b, MOD = 1e9 + 7;
    cin >> a >> b;
    cout << f(a, b, MOD);   
    return 0;
}
