    #include <bits/stdc++.h>
    using namespace std;
     
    #define int long long int
     
    vector<int> f(vector<int>& a) {
        int i = 0;
        vector<int> ret(a.size() + 1, 0);
        while(i < a.size()) {
            if(a[i] == 0) {
                i++;
                continue;
            }
            int count = 0, j = i;
            while(i < a.size() && a[i] == 1) {
                count++; i++;
            }
            for(int k = j, c = 1; k < a.size() && k <= i && c <= a.size(); k++, c++) {
                ret[c] += (count - c + 1);
            }
        }
        return ret;
    }
     
    signed main() {
    	int n, m, k;
    	cin >> n >> m >> k;
    	vector<int> a(n), b(m);
    	for(int i = 0; i < n; i++)
    	    cin >> a[i];
    	for(int i = 0; i < m; i++)
    	    cin >> b[i];
    	vector<int> x = f(a), y = f(b);
    	int ans = 0;
    	for(int i = 1; i <= n; i++) {
    	    if(k % i == 0) {
    	        if(k / i <= m)
    	            ans += (x[i] * y[k / i]);
    	        
    	    }
    	}
    	cout << ans << endl;
    	return 0;
    }
