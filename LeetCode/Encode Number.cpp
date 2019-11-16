class Solution {
public:
    string encode(int num) {
        string ans = "";
        while(num >= 2) {
            if(num % 2)
                ans += "0";
            else
                ans += "1";
            num = (num - 1) / 2;
        }
        if(num == 2)
            ans += "1";
        if(num == 1)
            ans += "0";
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
