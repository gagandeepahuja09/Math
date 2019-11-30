class Solution {
public:
    int minMoves(vector<int>& nums) {
        long sum = 0, minEle = INT_MAX, n = nums.size();
        for(int i : nums) {
            sum += (long)i; 
            minEle = min(minEle, (long)i);
        }
        return (int)(sum - minEle * n);
    }
};
