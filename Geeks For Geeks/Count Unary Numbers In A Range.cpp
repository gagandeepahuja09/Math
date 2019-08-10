#include<bits/stdc++.h>
using namespace std;

bool isUnary(int n) {
	if(n % 10)
	return (n == 1 || n == 7);
	int sum = 0;
	while(n) {
		sum += ((n % 10) * (n % 10));
		n /= 10;
	}
	return isUnary(sum);
}

int main() {
	int a, b;
	cin >> a >> b;
	for(int i = a; i <= b; i++) {
		if(isUnary(a, b))
			cnt++;
	}
	return cnt;
}
