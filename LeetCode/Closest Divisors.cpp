class Solution {
public:
	int minDiff;
	vector<int> ret;
	
	void calcMinDiff(int num) {
		for(int i = n; i > 0; i--) {
            int j = num / i;
            if(i * j == num) {
                int diff = abs(j - i);
                if(diff < minDiff) {
                    minDiff = diff;
                    ret[0] = i; ret[1] = j;
                }
            }
        }
	}
    vector<int> closestDivisors(int num) {
        minDiff = INT_MAX;
        ret.resize(2, 0);
        calcMinDiff(num + 1);
        calcMinDiff(num + 2);
        
        return ret;
    }
};
