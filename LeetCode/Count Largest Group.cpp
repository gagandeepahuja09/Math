class Solution {
public:
    int sum(int i, int s = 0) {
        while(i) {
            s += (i % 10);
            i /= 10;
        }    
        return s;
    }
    
    int countLargestGroup(int n) {
        unordered_map<int, int> mp;
        for(int i = 1; i <= n; i++) {
            int s = sum(i);
            mp[s]++;
        }
        int cnt = 0, mx = 0;
        for(auto i : mp) {
            if(i.second == mx) {
                mx = i.second;
                cnt++;
            }
            else if(i.second > mx) {
                mx = i.second;
                cnt = 1;
            }
        }
        return cnt;
    }
};
