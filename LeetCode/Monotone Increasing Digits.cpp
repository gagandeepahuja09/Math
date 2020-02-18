class Solution {
public:
    int monotoneIncreasingDigits(int N) {
        string num = to_string(N);
        bool grt = false;
        int i = 0;
        for(; i < num.size() - 1; i++) {
            if(num[i] > num[i + 1]) {
                while(num[i] == num[i - 1])
                    i--;
                num[i]--;
                grt = true;
                i++;
                break;
            }
        }
        if(grt) {
            for(; i < num.size(); i++) {
                num[i] = '9';
            }
        }
        return stoi(num);
    }
};
