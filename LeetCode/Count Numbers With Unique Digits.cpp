class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0)
            return 1;
        int ret = 10;
        int uniques = 9;
        int last = 9;
        while(n-- > 1 && last) {
            uniques *= last;
            ret += uniques;
            last--;
        }
        return ret;
    }
};
