class Solution {
public:
    string convertToBase7(int num) {
        if(!num) {
            return "0";
        }
        string ans;
        bool flag = false;
        if(num < 0) {
            flag = true;
            num = -num;
        }
        while(num) {
            ans += (num % 7 + '0');
            num /= 7;
        }
        reverse(ans.begin(), ans.end());
        if(flag)
            ans = '-' + ans;
        return ans;
    }
};
