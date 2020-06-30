#include<bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define pb push_back

int const M = 1000000007, N = 1e6 + 1;
 
int power(int x, int y) {
    if(y == 0)  return 1;
    if(y % 2)   return (x % M * power(x, y - 1) % M) % M;
    int f = power(x, y / 2) % M;
    return (f * f) % M;
}
 
int f1[N], f2[N], iv[N];

int mult(int a, int b) { 
  return (a%M * (b%M)) % M;
}

int nck(int n, int k){
    return f1[n] * f2[n-k] % M * f2[k] % M;
}

signed main() {
    iv[1] = f1[0] = f2[0] = 1;
    for (int i=2; i < N; i++) {
    iv[i] = (M - (M/i) * iv[M%i] % M) % M;
    }
    for (int i=1; i < N; i++){
        f1[i] = f1[i-1] * i % M;
        f2[i] = f2[i-1] * iv[i] % M;
    }
    int n, a, b, d;
    while(cin >> n >> a >> b >> d) {
        int ans = (nck(n, a) * power(nck(b, d), a)) % M;
        cout << ans << endl;
    }
}
