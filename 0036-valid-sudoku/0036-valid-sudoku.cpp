class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> rows[9];
        unordered_set<char> cols[9];
        unordered_set<char> block[9];
        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                int val = board[i][j];

                if(val == '.') continue;

                if(rows[i].find(val) != rows[i].end()){
                    return false;
                }
                rows[i].insert(val);

                if(cols[j].find(val) != cols[j].end()){
                    return false;
                }
                cols[j].insert(val);

                int idx = (i/3)*3 + (j/3);
                if(block[idx].find(val) != block[idx].end()){
                    return false;
                }
                block[idx].insert(val);

            }
        }
        return true;
    }
};