class Solution {
public:
    int findSubstringInWraproundString(string p) {
        int n = p.size();
        vector<int> len(26, 0);
        for(int i = 0; i < n; i++) {
            for(int j = i; j < n; j++) {
                if(j > i && p[j] - p[j - 1] != 1 && p[j - 1] - p[j] != 25)
                    break;
                len[p[i] - 'a'] = max(len[p[i] - 'a'], j - i + 1);
            }
        }
        return accumulate(len.begin(), len.end(), 0);
    }
};
