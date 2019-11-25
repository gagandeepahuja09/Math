class Solution {
public:
    bool f(int sx, int sy, int tx, int ty) {
        if(tx < sx)
            return false;
        if(tx == sx)
            return (((ty - sy) % sx) == 0);
        return f(sy, sx, ty % tx, tx);
    }
    
    bool reachingPoints(int sx, int sy, int tx, int ty) {
        if(tx < sx || ty < sy)
            return false;
        if(tx <= ty)
            return f(sx, sy, tx, ty);
        return f(sy, sx, ty, tx);
    }
};
