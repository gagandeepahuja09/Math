class Solution {
public:
    int leaps(int y, int m) 
    { 
        if (m <= 2) 
            y--; 
        return y / 4 - y / 100 + y / 400; 
    } 
    
    int daysBetweenDates(string d1, string d2) {
        vector<int> mon = {
            31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31
        };
        long yr = stol(d1.substr(0, 4)), m = stol(d1.substr(5, 2));
        long n1 = yr * 365 + stol(d1.substr(8));
        for(int i = 0; i < m - 1; i++) {
            n1 += mon[i];
        }
        n1 += leaps(yr, m);
        
        
        yr = stol(d2.substr(0, 4)), m = stol(d2.substr(5, 2));
        long n2 = yr * 365 + stol(d2.substr(8));
        for(int i = 0; i < m - 1; i++) {
            n2 += mon[i];
        }
        n2 += leaps(yr, m);
        return abs(n1 - n2);
    }
};
