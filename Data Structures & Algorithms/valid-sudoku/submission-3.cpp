class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //consider total 9x9 items and compare in 3 sets
        //rows , cols , sqrs
        //if any item repeat is any row of rows , col of cols , belong to sq return false

        unordered_map<int , unordered_set<char>> rows , cols;
        map<pair<int,int> , unordered_set<char>> sqrs;

        for(int row = 0; row<9 ; row++){
            for(int col = 0; col<9; col++){
                char c = board[row][col];

                if(c=='.') continue;
                pair<int,int> sq = {row/3, col/3};

                if(
                    rows[row].count(c) ||
                    cols[col].count(c) ||
                    sqrs[sq].count(c)
                )
                    return false;

                rows[row].insert(c);
                cols[col].insert(c);
                sqrs[sq].insert(c);
            }
        }
        return true;
    }
};
