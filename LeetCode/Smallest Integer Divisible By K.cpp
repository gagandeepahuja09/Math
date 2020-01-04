class Solution {
public:
    int smallestRepunitDivByK(int K) {
        if(K == 1)
            return 1;
        int rem = 1, prev = -1, sz = 1;
        vector<int> vis(K + 1, 0);
        while(1) {
            if(rem == 0)
                return sz;
            if(vis[rem])
                return -1;
            vis[rem]++;
            rem = ((rem % K * 10 % K) + 1) % K;
            sz++;
        }
        return -1;
    }
};
