class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int o = 0, e = 0;
        for(int i : chips) {
            if(i % 2)
                o++;
            else
                e++;
        }
        return min(o, e);
    }
};
