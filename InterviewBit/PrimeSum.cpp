vector<int> Solution::primesum(int n) {
    vector<bool> isPrime;
    for(int i = 0; i < n; i++) {
        isPrime.push_back(true);
    }
    for(int p = 2; p <= sqrt(n); p++) {
        if(isPrime[p]) {
            // Update all primes of p
            for(int i = 2; p * i <= n; i++) {
                isPrime[p * i] = false;
            }
        }
    }
    vector<int> res;
    for(int i = 2; i < n; i++) {
        if(isPrime[i] && isPrime[n - i]) {
            res.push_back(i);
            res.push_back(n - i);
            break;
        }
    }
    return res;
}

