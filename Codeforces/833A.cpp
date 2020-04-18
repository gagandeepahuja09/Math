    #include<bits/stdc++.h>
    using namespace std;
     
    #define ll long long
    #define MX 1000005
     
    ll cubeRoot(ll a) {
        if(a <= 1ll)
            return a;
        ll low = 1, high = 1000005, ans = 0;
        while(low <= high) {
            ll mid = low + (high - low) / 2;
            if(mid * mid * mid > a) {
                high = mid - 1;
            }
            else {
                ans = mid;
                low = mid + 1;
            }
        }
        return ans;
    }
     
    int main() {
        ll n;
        cin >> n;
        while(n--) {
            ll a, b;
            cin >> a >> b;
            ll prod = a * b;
            ll x = cubeRoot(prod);
            if(x * x * x != prod) {
                cout << "No" << endl;
            }
            else if(a % x == 0 && b % x == 0) {
                cout << "Yes" << endl;
            }
            else {
                cout << "No" << endl;
            }
        }
    }
