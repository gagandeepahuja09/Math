class Solution {
public:
    string addOne(string s) {
        int carry = 1;
        for(int i = s.size() - 1; i >= 0 && carry; i--) {
            if(carry == 0)
                break;
            int c = (s[i] - '0' + carry) % 2;
            carry = s[i] - '0' + carry - 1;
            s[i] = c + '0';
        }
        if(carry) {
            s.insert(s.begin(), '1');
        }
        return s;
    }
    int numSteps(string s) {
        int cnt = 0;
        while(s != "1") {
            if(s.back() == '1') {
                s = addOne(s);
            }
            else {
                s.pop_back();
            }
            cnt++;
        }
        return cnt;
    }
};
