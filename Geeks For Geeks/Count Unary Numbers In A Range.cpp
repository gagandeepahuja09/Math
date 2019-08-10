#include<bits/stdc++.h>
using namespace std;

/*

Given two numbers A and B, A<=B, the task is to find the number of unary numbers between A and B, both inclusive.

Unary Number: Consider the number 28. If we take the sum of square of its digits, 2*2 + 8*8, we get 68. Taking the sum of squares of digits again, we get 6*6 + 8*8=100. Doing this again, we get 1*1 + 0*0 + 0*0 = 1. Any such number, which ultimately leads to 1, is called a unary number.

*/

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
