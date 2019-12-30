class Solution {
public:
    int gcd(int x, int y) {
        return y == 0 ? x : gcd(y, x % y);
    }
    
    bool canMeasureWater(int x, int y, int z) {
        return z == 0 || (z - x <= y && z % gcd(x, y) == 0);  
    }
};
