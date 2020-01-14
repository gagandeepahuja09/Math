class Solution {
public:
    vector<vector<char>> mat;
    pair<int, int> findPos(char c) {
       for(int i = 0; i < mat.size(); i++) {
           for(int j = 0; j < mat[i].size(); j++) {
               if(mat[i][j] == c) {
                   return { i, j };
               }
           }
       }
       return {0, 0};
    }
    
    string alphabetBoardPath(string s) {
        int ans = 0;
        mat = {
            { 'a', 'b', 'c', 'd', 'e' },
            { 'f', 'g', 'h', 'i', 'j' },
            { 'k', 'l', 'm', 'n', 'o' },
            { 'p', 'q', 'r', 's', 't' },
            { 'u', 'v', 'w', 'x', 'y' },
            { 'z' }
        };
        pair<int, int> p1 = { 0, 0 };
        string ret;
        for(int i = 0; i < s.size(); i++) {
            pair<int, int> p2 = findPos(s[i]);
            int x = p2.first - p1.first;
            int y = p2.second - p1.second;
            if(i > 0 && s[i - 1] == 'z') {
                if(x < 0) {
                    for(int j = 0; j < abs(x); j++) {
                        ret += 'U';
                    }
                }
                else {
                    for(int j = 0; j < x; j++) {
                        ret += 'D';
                    }
                }
                if(y < 0) {
                    for(int j = 0; j < abs(y); j++) {
                        ret += 'L';
                    }
                }
                else {
                    for(int j = 0; j < y; j++) {
                        ret += 'R';
                    }
                }
            }
            else {
                if(y < 0) {
                    for(int j = 0; j < abs(y); j++) {
                        ret += 'L';
                    }
                }
                else {
                    for(int j = 0; j < y; j++) {
                        ret += 'R';
                    }
                }
                if(x < 0) {
                    for(int j = 0; j < abs(x); j++) {
                        ret += 'U';
                    }
                }
                else {
                    for(int j = 0; j < x; j++) {
                        ret += 'D';
                    }
                }    
            }
            // cout << '0' << ret << endl;
            ret += '!';
            // cout << ret << endl;
            p1 = p2;
        }
        return ret;
    }
};
