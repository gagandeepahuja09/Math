class Solution {
public:
    int uniqueLetterString(string S) {
        int n = S.size();
        vector<int> prev(n, -1);
        vector<int> next(n, n);
        vector<int> last(26, -1);
        for(int i = 0; i < n; i++) {
            int c = S[i] - 'A';
            prev[i] = last[c];
            if(last[c] != -1)
                next[last[c]] = i;
            last[c] = i;
        }
        int ans = 0;
        for(int i = 0; i < n; i++) {
            ans += (i - prev[i]) * (next[i] - i);
        }
        return ans;
    }
};
