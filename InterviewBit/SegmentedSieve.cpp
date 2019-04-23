vector<int> Solution::sieve(int A) {
    vector<int> isPrime(A + 1, true);
    isPrime[0] = isPrime[1] = true;
    for(int i = 2; i * i < A; i++) {
        if(isPrime[i]) {
            for(int j = i * i; j <= A; j+= i) {
                isPrime[j] = false;
            }
        }
    }
    vector<int> ret;
    for(int i = 2; i <= A; i++) {
        if(isPrime[i])
            ret.push_back(i);
    }
    return ret;
}

