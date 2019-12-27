class Solution {
public:
    int reachNumber(int t) {
        t = abs(t);
        int step = 0, sum = 0;
        while(sum < t) sum += ++step;
        while((sum - t) % 2) sum += ++step;
        return step;
    }
};
