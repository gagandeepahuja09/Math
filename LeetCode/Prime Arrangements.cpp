class Solution {
public:
    int numPrimeArrangements(int n) {
        const long MOD = 1e9 + 7;
        int count = 0;
        vector<long> f(n + 1, 1);
        for(int i = 2; i <= n; i++) {
            f[i] = f[i - 1] * i;
            f[i] %= MOD;
        }
        for(int p = 2; p <= n; p++) {
            bool isprime = true;
            for(int i = 2; i * i <= p; i++) {
                if(p % i == 0) {
                    isprime = false;
                    break;
                }
            }
            if(isprime)
                count++;
        }
        cout << count << endl;
        return (int)(f[count] % MOD * f[n - count] % MOD);
    }
};
