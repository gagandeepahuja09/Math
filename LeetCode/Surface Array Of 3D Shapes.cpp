class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        vector<int> dx = { -1, 1, 0, 0 };
        vector<int> dy = { 0, 0, -1, 1 };
        int ret = 0;
        int n = grid.size(), m = grid[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!grid[i][j])
                    continue;
                ret += 2;
                for(int k = 0; k < 4; k++) {
                    int curri = i + dx[k], currj = j + dy[k], neigh = 0;
                    if(curri >= 0 && curri < n && currj >= 0 && currj < m)
                        neigh = grid[curri][currj];
                    ret += max(0, grid[i][j] - neigh);
                }
            }
        }
        return ret;
    }
};
