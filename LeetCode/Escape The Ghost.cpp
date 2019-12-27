class Solution {
public:
    bool escapeGhosts(vector<vector<int>>& ghosts, vector<int>& t) {
        for(auto g : ghosts) {
            if(abs(g[0] - t[0]) + abs(g[1] - t[1]) <= abs(t[0]) + abs(t[1]))
                return false;
        }
        return true;
    }
};
