#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    int c = 0;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int sum = 0, prev = 0, temp = 1;
        bool flag = true;
        string s;
        for(int i = 0; i < n; i++)
            s += 'a';
        for(int i = n - 2; i >= 0; i--) {
            prev = sum;
            sum += temp;
            temp++;
            if(sum >= k) {
                s[i] = 'b';
                int diff = k - prev;
                diff--;
                flag = false;
                s[n - 1 - diff] = 'b';
                break;
            }
        }
        if(flag) {
            s[0] = 'b'; s[1] = 'b';
        }
        cout << s << endl;
    }
	return 0;
}
