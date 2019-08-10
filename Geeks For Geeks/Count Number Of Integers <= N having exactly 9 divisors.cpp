#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--) {
		int n, ret = 0;
		cin >> n;
		int limit = sqrt(n);
		// Smallest Prime
		vector<int> sp(limit + 1);
		for(int i = 1; i <= limit; i++) {
			sp[i] = i;
		}

		for(int i = 2; i <= limit; i++) {
			for(int j = i * i; j <= limit; j += i) {
				if(sp[j] == j) {
					sp[j] = i;
				}
			}
		}
		
		for(int i = 2; i <= limit; i++) {
			int p = sq[i];
			int q = sq[i / p];
			if(p * q == i && q != 1 && p != q) {
				ret++;
			}
			else if(pow(i, 4) <= limit) {
				ret++;
			}
		}
		cout << ret << endl;
	} 
}
