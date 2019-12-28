class Solution {
public:
    vector<double> sampleStats(vector<int>& count) {
        double mn = -1.0, mx, mean, median, mode, sum = 0, n = 0;
        int maxFreq = 0;
        for(int i = 0; i < count.size(); i++) {
            if(count[i]) {
                if(mn == -1.0) {
                    mn = (double)i;
                }
                mx = (double)i;
                n += (double)count[i];
                sum += ((double)i * (double)count[i]);
            }
            if(count[i] > maxFreq) {
                maxFreq = count[i];
                mode = i;
            }
        }
        mean = sum / n;
        double cnt = 0;
        for(int i = 0; i < count.size(); i++) {
            cnt += (double)count[i];
            if(cnt >= (double)(n / 2)) {
                if((int)n % 2 == 0 && cnt == n / 2) {
                    median = (double)i / 2;
                    for(int j = i + 1; j < count.size(); j++) {
                        if(count[j]) {
                            median += ((double)j / 2);
                        }
                    }
                }
                else {
                    median = i;
                }
                break;
            }
        }
        return { mn, mx, mean, median, mode };
    }
};
