class Solution {
public:
    int clamp(int xc, int x1, int x2) {
        if(xc >= x1 && xc <= x2) {
            return xc;
        }
        if(x1 > xc)
            return x1;
        return x2;
    }
    
    bool checkOverlap(int r, int xc, int yc, int x1, int y1, int x2, int y2) {
        int closestX = clamp(xc, x1, x2);
        int closestY = clamp(yc, y1, y2);
        int distsq = (xc - closestX) * (xc - closestX) + (yc - closestY) * (yc - closestY);
        return distsq <= r * r;
    }
};
