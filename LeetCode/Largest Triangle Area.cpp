class Solution {
public:
    double dist(vector<int> px, vector<int> py) {
        int x1 = px[0], y1 = px[1], x2 = py[0], y2 = py[1];
        return sqrt(pow((x2  - x1), 2) + pow(y2 - y1, 2));
    }
    
    double herons(vector<int> px, vector<int> py, vector<int> pz) {
        double a = dist(px, py), b = dist(py, pz), c = dist(pz, px);
        double s = (a + b + c) / 2;
        return sqrt(s * (s - a) * (s - b) * (s - c));
    }
    
    double largestTriangleArea(vector<vector<int>>& points) {
        double ans = 0;
        for(int i = 0; i < points.size() - 2; i++) {
            for(int j = i + 1; j < points.size() - 1; j++) {
                for(int k = j + 1; k < points.size(); k++) {
                    ans = max(ans, herons(points[i], points[j], points[k]));
                }
            }
        }
        return ans;
    }
};
