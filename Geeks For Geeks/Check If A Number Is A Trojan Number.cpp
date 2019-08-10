#include<bits/stdc++.h>
using namespace std;

/*
Given a Number N. The task is to check if N is a Trojan Number or not.

Trojan Number is a number that is a strong number but not a perfect power. 
A number N is known as a strong number if, for every prime divisor or factor p of N,
p2 is also a divisor. In other words, every prime factor appears at least twice.

All Trojan numbers are strong. However, not all strong numbers are Trojan numbers: 
only those that cannot be represented as mk, where m and k are positive integers 
greater than 1.

*/

bool isPerfectPower(int n) {
	if(n == 1)
		return true;
	for(int i = 2; i * i <= n; i++) {
		int p = 2;
		int val = pow(i, p);
		while(val <= n && val > 0) {
			if(val == n)
				return true;
			val = pow(i, ++p);
		}
	}
	return false;
}

bool isStrong(int n) {
	unordered_map<int, int> cnt;
	while(n % 2 == 0) {
		cnt[2]++;
		n /= 2;
	}
	for(int i = 3; i * i <= n; i++) {
		while(n % i == 0) {
			cnt[i]++;
			n /= i;
		}		
	}
	if(n > 2)
		cnt[n]++;
	for(auto it = cnt.begin(); it != cnt.end(); it++) {
		if(it -> second == 1)
			return false;
	}
	return true;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
    	int n;
    	cin >> n;
    	cout << (!isPerfectPower(n) && isStrong(n)) << endl;
    }
}
