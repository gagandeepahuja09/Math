class Solution {
public:
    int calcSteps(long n1, long n2, long n) {
        int steps = 0;
        while(n1 <= n) {
            steps += min(n + 1, n2) - n1;
            n1 *= 10;   n2 *= 10;
        }
        return steps;
    }
    
    int findKthNumber(int n, int k) {
        k--;
        int curr = 1;
        while(k > 0) {
            int steps = calcSteps(curr, curr + 1, n);
            if(steps <= k) {
                curr++;
                k -= steps;
            }
            else {
                curr *= 10;
                k--;
            }
        }
        return curr;
    }
};
