    #include <bits/stdc++.h>
    using namespace std;
     
    int main() {
        int t;
        cin >> t;
        while(t--) {
            long long n, k;
            cin >> n >> k;
            if(k % 2 == 0) {
                if(n % 2 == 0 && n >= k * k) {
                    cout << "YES";
                }
                else
                    cout << "NO";
            }
            else {
                if(n % 2 == 1 && n >= k * k)
                    cout << "YES";
                else
                    cout << "NO";
            }
            cout << endl;
        }
    }
