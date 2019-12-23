class Solution {
public:
    int rotatedDigits(int N) {
        int ans = 0;
        for(int i = 1; i <= N; i++) {
            int num = i;
            bool flag = true;
            int count = 0;
            while(num) {
                if(!(num % 10 == 2 || num % 10 == 5 || num % 10 == 6 || num % 10 == 9)) {
                    if(num % 10 == 3 || num % 10 == 4 || num % 10 == 7) {
                        flag = false;
                        break;
                    }
                }
                else 
                    count++;
                num /= 10;
            }
            if(flag && count)
                ans++;
        }
        return ans;
    }
};
