#include <bits/stdc++.h>
using namespace std;
 
#define int long long int
#define vi vector<int>
#define vvi vector<vi>
#define read(a)  for(int i = 0; i < n; i++) cin >> a[i];
#define print(a)  for(int i = 0; i < n; i++) cout << a[i] << " ";
#define pb push_back
#define pql priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define pqlv priority_queue<vi>
#define pqsv priority_queue<vi, vvi, greater<vi>>
#define endl '\n'
#define N 1234567
#define MOD 1000000007

bool can(int val, vi& a, int t, int sum = 0) {
    for(int i = 0; i < a.size(); i++) {
        if(sum + (val / a[i]) > t)
            return true;
        sum += (val / a[i]);
    }
    return sum >= t;
}

signed main() {
    int n, m;
    cin >> n >> m;
    int mx = n - (m - 1);
    int amx = (mx * (mx - 1)) / 2;
    int d = n / m; // 10 / 4 = 2
    int r = n % m; // 10 % 4 = 2
    int amn = r * ((d * (d + 1))/ 2) + ((m - r) * (d * (d - 1)) / 2);
    cout << amn << " " << amx << endl;
}
