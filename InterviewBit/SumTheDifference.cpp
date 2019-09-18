/*Given an Array of numbers

You have to find all possible non-empty subsets of the array of numbers and then,for each
subset, find the difference between the largest and smallest numbers in that subset 
Then add up all the differences to get the number.*/

#define ll long long int
#define MOD 1000000007

int Solution::solve(vector<int> &A) {
    int mn = 0, mx = 0, n = A.size();
    sort(A.begin(), A.end());
    for(int i = 0; i < n; i++) {
        mn = ((2 * mn % MOD) % MOD + A[i] % MOD) % MOD;
        mx = ((2 * mx % MOD) % MOD + A[n - 1 - i] % MOD) % MOD;
    }
    int ans = ((mx % MOD - mn % MOD + MOD) % MOD);
    return ans;
}

