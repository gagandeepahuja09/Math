#include<bits/stdc++.h>
using namespace std;

#define ll long long int
#define MOD 1000000007
#define MAX 100005

int main() {
    // ll t;
    // cin >> t;
    // while(t--) {
        string s;
        cin >> s;
        bool ok = false;
        int ans = -1;
        for(int i = 0; i < s.size(); i++) {
            int n = s[i] - '0';
            if(n % 8 == 0) {
                ok = true;
                ans = n;
            }
        }
        for(int i = 0; i < s.size(); i++) {
            for(int j = i + 1; j < s.size(); j++) {
                int n = (s[i] - '0') * 10 + (s[j] - '0');
                if(n % 8 == 0) {
                    ok = true;
                    ans = n;
                }
            }
        }
        for(int i = 0; i < s.size(); i++) {
            for(int j = i + 1; j < s.size(); j++) {
                for(int k = j + 1; k < s.size(); k++) {
                    int n = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                    if(n % 8 == 0) {
                        ok = true;
                        ans = n;
                    }
                }
            }
        }
        if(ok)
            cout << "YES" << endl << ans << endl;
        else
            cout << "NO" << endl;
    // }
}
