class Solution {
public:
    int countBinarySubstrings(string s) {
        int i = 0, ans = 0, prevcnt = 0;
        while(i < s.size()) {
            int cnt = 0;
            char c = s[i];
            while(s[i] == c) {
                cnt++;
                i++;
            }
            ans += min(prevcnt, cnt);
            prevcnt = cnt; 
        }
        return ans;
    }
};
