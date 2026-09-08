class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char>st;

        //horizontal check

        for(int row = 0; row<9; row++){
            for(int i=0; i<9; i++){
                char c = board[row][i];
                if(c=='.')  continue;

                if(st.count(c)) return false;
                st.insert(c);
            }
            st.clear();
        }

        //vertical check

        for(int col = 0; col<9; col++){
            for(int j=0; j<9; j++){
                char c = board[j][col];

                if(c=='.')  continue;

                if(st.count(c)) return false;
                st.insert(c);
            }
            st.clear();
        }

        //box check total 0to8  9boxes

        for(int sq = 0; sq<9; sq++){
            for(int i=0; i<3; i++){
                for(int j=0; j<3; j++){
                    int row = (sq /3) * 3+i;
                    int col = (sq %3) * 3+j;

                    char c = board[row][col];
                    
                    if(c=='.')  continue;
                    if(st.count(c)) return false;

                    st.insert(c);
                }
            }
            st.clear();
        }
        return true;
    }
};
