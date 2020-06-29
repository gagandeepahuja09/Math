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
int const N = 1e6 + 1, M = 1e9 + 7;
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
    int t, cn = 0;
    cin >> t;
    while(t--) {
        cn++;
        int n, k, ans = 0;
        cin >> n >> k;
        vi a(n);
        for(int i = 0; i < n; i++)  cin >> a[i];
        sort(a.begin(), a.end());
        for(int i = k - 1; i < n; i++) {
            int curr = nck(i, k - 1);
            ans += (a[i] * curr);
            ans %= M;
        }
        cout << "Case #" <<cn << ": " << ans << endl;
    }
}
