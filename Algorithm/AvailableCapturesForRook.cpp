class Solution {
public:
    int numRookCaptures(vector<vector<char>>& board) {
        int r = -1;
        int c = -1;
        int n = board.size();
        int m = board[0].size();
        for(int i = 0;i<n;i++){
            for(int j = 0;j<m;j++){
                if(board[i][j]=='R'){
                    r = i;
                    c = j;
                    break;
                }
            }
        }
        int sum = 0;
        for(int i = r-1;i>=0;i--){
            if(board[i][c]!='.'){
                if(board[i][c]=='p'){
                    sum++;
                }
                break;
            }
        }
        for(int i = r+1;i<n;i++){
            if(board[i][c]!='.'){
                if(board[i][c]=='p'){
                    sum++;
                }
                break;
            }
        }
        for(int i = c+1;i<m;i++){
            if(board[r][i]!='.'){
                if(board[r][i]=='p') sum++;
                break;
            }
        }
        for(int i = c-1;i>=0;i--){
            if(board[r][i]!='.'){
                if(board[r][i]=='p') sum++;
                break;
            }
        }
        return sum;
    }
};
