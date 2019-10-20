class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& A) {
        double m;
        for(int i = 1; i < A.size(); i++) {
            float x1 = A[i - 1][0], y1 = A[i - 1][1];
            float x2 = A[i][0], y2 = A[i][1];
            float cm = x2 == x1 ? FLT_MAX : (y2 - y1) / (x2 - x1);
            if(i == 1)
                m = cm;
            if(i > 1 && cm != m)
                return false;
        }
        return true;
    }
};
