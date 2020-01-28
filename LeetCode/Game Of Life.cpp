class Solution {
public:
    vector<int> dx = { 0, -1, 1, 0, -1, -1, 1, 1 };
    vector<int> dy = { 1, 0, 0, -1, -1, 1, -1, 1 };
    
    int countLive(vector<vector<int>>& A, int i, int j) {
        int count = 0;
        for(int k = 0; k < 8; k++) {
            int ci = i + dx[k], cj = j + dy[k];
            if(ci >= 0 && ci < A.size() && cj >= 0 && cj < A[0].size() && A[ci][cj] & 1) {
                count++;
            }
        }
        return count;
    }
    
    // Don't affect it's bit 0, it will be used for checking
    // Affect it's bit 1
    void gameOfLife(vector<vector<int>>& A) {
        for(int i = 0; i < A.size(); i++) {
            for(int j = 0; j < A[0].size(); j++) {
                int liveNeigh = countLive(A, i, j);
                if(A[i][j] & 1) {
                    // 01 or 11
                    if(liveNeigh < 2 || liveNeigh > 3) {
                        // 01
                        A[i][j] = 1; 
                    }
                    else {
                        // 11
                        A[i][j] = 3;
                    }
                }
                else {
                    if(liveNeigh == 3) {
                        // 10
                        A[i][j] = 2;
                    }
                }
            }
        }
        
        for(int i = 0; i < A.size(); i++) {
            for(int j = 0; j < A[0].size(); j++) {
                A[i][j] >>= 1;
            }
        }
    }
};
