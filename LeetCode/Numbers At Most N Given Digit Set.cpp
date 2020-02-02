class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& D, int N) {
        string ns = to_string(N);
        int ans = 0;
        for(int i = 1; i < ns.size(); i++) {
            ans += pow(D.size(), i);
        }
        for(int i = 0; i < ns.size(); i++) {
            bool hasSameNum = false;
            for(string s : D) {
                if(s[0] < ns[i]) {
                    ans += pow(D.size(), ns.size() - i - 1);
                }
                else if(s[0] == ns[i]) {
                    hasSameNum = true;
                }
            }
            if(!hasSameNum)
                return ans;
        }
        return ans + 1;
    }
};
