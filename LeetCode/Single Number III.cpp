#define ll long long int

class Solution {
public:
    const ll MOD = 1e9 + 7;
    
    
    ll power(ll x, ll y) {
        if(y == 0)  return 1ll;
        ll half = power(x, y / 2) % MOD;
        if(y % 2) {
            return ((half * half) % MOD * x) % MOD;
        }
        return (half * half) % MOD;
    }
    
    int numSubseq(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int j = nums.size() - 1, ans = 0;
        for(int i = 0; i < nums.size(); i++) {
            while(j >= 0 && nums[i] + nums[j] > target) {
                j--;    
            }
            if(j >= i) {
                ans += power(2, j - i);
                ans %= MOD;
            }
        }
        return ans;
    }
};
