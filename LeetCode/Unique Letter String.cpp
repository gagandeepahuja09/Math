class Solution {
public:
    int uniqueLetterString(string s) {
        int n = s.size();
        vector<int> prev(n, -1), next(n, n);
        vector<int> pos(26, -1);
        for(int i = 0; i < s.size(); i++) {
            prev[i] = pos[s[i] - 'A'];
            if(pos[s[i] - 'A'] != -1)
                next[pos[s[i] - 'A']] = i;
            pos[s[i] - 'A'] = i;
        }
        int ans = 0;
        for(int i = 0; i < s.size(); i++) {
            ans += (i - prev[i]) * (next[i] - i);
        }
        return ans;
    }
};
