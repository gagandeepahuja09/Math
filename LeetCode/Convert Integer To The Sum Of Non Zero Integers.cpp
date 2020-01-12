class Solution {
public:
    bool isVal(int num) {
        while(num) {
            if(num % 10 == 0)
                return false;
            num /= 10;
        }
        return true;
    }
    
    vector<int> getNoZeroIntegers(int n) {
        for(int i = 1; i < n; i++) {
            int n1 = i;
            int n2 = n - i;
            if(isVal(n1) && isVal(n2))
                return { n1, n2 };
        }
        return vector<int>{};
    }
};
