class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int N) {
        set<vector<int>> st;
        vector<int> cellsNext(cells.size(), 0);
        for(int cycle = 0; N--; cycle++) {
            for(int i = 1; i < cells.size() - 1; i++) 
                cellsNext[i] = (cells[i - 1] == cells[i + 1]), cout << cellsNext[i];
            if(st.find(cellsNext) == st.end()) {
                st.insert(cellsNext);
            }
            else {
                N %= cycle; 
            }
            cells = cellsNext;
        }
        return cells;
    }
};
