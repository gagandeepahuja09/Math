vector<int> Solution::primesum(int A) {
    vector<bool> prime(A + 1, true);
    prime[0] = prime[1] = false;
    for(int i = 2; i <= A; i++) {
        if(prime[i]) {
            for(int j = 2 * i; j <= A; j += i) {
                prime[j] = false;
            }
        }
    }
    for(int i = 2; i < A; i++) {
        if(prime[i] && prime[A - i])
            return { i, A - i };
    }
    return {};
}


