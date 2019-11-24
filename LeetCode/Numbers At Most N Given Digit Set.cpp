class Solution {
public:
    int atMostNGivenDigitSet(vector<string>& D, int n) {
        string ns = to_string(n);
        int dsize = D.size();
        int ret = 0;
        for(int i = 1; i < ns.size(); i++) {
            ret += pow(dsize, i);
        }
        for(int i = 0; i < ns.size(); i++) {
            bool hasSameNum = false;
            for(string s : D) {
                if(s[0] < ns[i]) {
                    ret += pow(dsize, (int)ns.size() - 1 - i);
                }
                if(s[0] == ns[i])
                    hasSameNum = true;
            }
            if(!hasSameNum)
                return ret;
        }
        return ret + 1;
    }
};
