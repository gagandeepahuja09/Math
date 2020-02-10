class Solution {
public:
    int scoreOfParentheses(string S) {
        int balance = 0, ans = 0;
        for(int i = 0; i < S.size(); i++) {
            if(S[i] == '(')
                balance++;
            else {
                balance--;
                if(S[i - 1] == '(')
                    ans += (1 << balance);
            }
        }
        return ans;
    }
};
