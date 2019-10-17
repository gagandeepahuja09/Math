class Solution {
public:
    vector<int> dx = { 0, 0, -1, 1 };
    vector<int> dy = { 1, -1, 0, 0 };
    
    int surfaceArea(vector<vector<int>>& grid) {
        int ret = 0;
        int n = grid.size(), m = grid[0].size();
        for(int i = 0; i < n; i++) {
            for(int j = 0; j < m; j++) {
                if(!grid[i][j])
                    continue;
                ret += 2;
                int val = grid[i][j];
                for(int k = 0; k < 4; k++) {
                    int nx = i + dx[k], ny = j + dy[k], neigh = 0;
                    if(nx >= 0 && ny >= 0 && nx < n && ny < m)
                            neigh = grid[nx][ny];
                    ret += max(val - neigh, 0);
                }
            }
        }
        return ret;
    }
};
