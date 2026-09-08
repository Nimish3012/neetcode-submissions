class Solution {
   public:
    // rule : dont start going to optimization directly
    //  try to be accurate first
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<char> st;

 // vertical check
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board.size(); j++) {
                auto c = board[j][i];

                if (c >= '1' && c <= '9') {
                    if (st.find(c) != st.end()) return false;

                    st.insert(c);
                }
            }
            st.clear();
        }
        // horizontal check
        for (auto i : board) {
            for (auto c : i) {
                if (c >= '1' && c <= '9') {
                    if (st.find(c) != st.end()) return false;

                    st.insert(c);
                }
            }
            st.clear();
        }

       

        // section check (3x3 sub-grids)
        // Outer two loops find the top-left corner of each of the 9 boxes
        for (int rowStart = 0; rowStart < 9; rowStart += 3) {
            for (int colStart = 0; colStart < 9; colStart += 3) {
                // Clear the set for the current 3x3 box
                st.clear();

                // Inner two loops scan the elements inside the current 3x3 box
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char c = board[rowStart + i][colStart + j];

                        // Check if it's a valid digit
                        if (c >= '1' && c <= '9') {
                            if (st.find(c) != st.end()) {
                                return false;  // Duplicate found in this 3x3 block
                            }
                            st.insert(c);
                        }
                    }
                }
            }
        }

        return true;
    }
};
