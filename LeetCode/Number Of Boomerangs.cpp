class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& p) {
        int ans = 0;
        for(int i = 0; i < p.size(); i++) {
            unordered_map<long, int> mp;
            for(int j = 0; j < p.size(); j++) {
                if(i == j)
                    continue;
                long dx = p[j][0] - p[i][0], dy = p[j][1] - p[i][1];
                long dist = (dx * dx) + (dy * dy);
                mp[dist]++;
            }
            for(auto p : mp) {
                if(p.second > 1) {
                    ans += (p.second * (p.second - 1));
                }
            }
        }
        return ans;
    }
};
