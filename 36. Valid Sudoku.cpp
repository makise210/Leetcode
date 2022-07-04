class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_set<string> st;//use hash_set can make sure all numbers are unipue
        for(int i=0;i<9;++i){
            for(int j=0;j<9;++j){
                if(board[i][j] == '.')continue;
                string t = "<" + to_string(board[i][j])+">";
                string row = to_string(i)+t, col = t+to_string(j), cell = to_string(i/3)+t+to_string(j/3);//add the number of position
                if(st.count(row)||st.count(col)||st.count(cell))return false;//if duplicate return false
                st.insert(row);//store the value
                st.insert(col);
                st.insert(cell);
            }
        }
        return true;
    }
};
