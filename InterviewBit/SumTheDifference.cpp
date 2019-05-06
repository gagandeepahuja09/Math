/*Given an Array of numbers

You have to find all possible non-empty subsets of the array of numbers and then,for each
subset, find the difference between the largest and smallest numbers in that subset 
Then add up all the differences to get the number.*/

#define ll long long int
#define MOD 1000000007

int Solution::solve(vector<int> &A) {
    ll mn = 0, mx = 0;
    sort(A.begin(), A.end());
    for(int i = 0; i < A.size(); i++) {
        mn = (2 % MOD * mn % MOD) + A[i] % MOD;
        mx = (2 % MOD * mx % MOD) + A[A.size() - i - 1] % MOD;
        mn %= MOD;
        mx %= MOD;
    }
    return int((mx % MOD - mn % MOD) % MOD);
}

