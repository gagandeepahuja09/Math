class Solution {
public:
    int d(vector<int>& x, vector<int>& y) {
        int x1 = x[0], y1 = x[1], x2 = y[0], y2 = y[1];
        return pow(x2 - x1, 2) + pow(y2 - y1, 2);
    }
    
    bool validSquare(vector<int>& p1, vector<int>& p2, vector<int>& p3, vector<int>& p4) {
        unordered_set<int> st({ d(p1, p2), d(p1, p3), d(p1, p4), d(p2, p3), d(p2, p4), d(p3, p4) });
        return (st.count(0) == 0 && st.size() == 2);
    }
};
