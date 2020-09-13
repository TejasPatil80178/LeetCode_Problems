class Solution {
public:
    vector<vector<string>> res;
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<int> >board(n,vector<int>(n,0));
        set<int> diag;
        set<int> diag2;
        set<int> vert;
        backtrack(board,0,diag,diag2,vert);
        
        return res;
    }
    void backtrack(vector<vector<int> >board,int i, set<int> diag,set<int> diag2,set<int> vert){
        int n = board.size();
        //cout<<n<<" ";
        if(i==n){
            //cout<<"yes";
            addToList(board);
            return;
        }
        for(int j = 0;j<n;j++){
            if(!diag.count(i+j) && !diag2.count(j-i) && !vert.count(j)){
                board[i][j] = 1;
                diag.insert(i+j);
                diag2.insert(j-i);
                vert.insert(j);
                backtrack(board,i+1,diag,diag2,vert);
                board[i][j] = 0;
                diag.erase(i+j);
                diag2.erase(j-i);
                vert.erase(j);
            }
        }
    }
    
    void addToList(vector<vector<int>> board){
        int n = board.size();
        vector<string> s;
        for(int i = 0;i<n;i++){
            string temp;
            for(int j = 0;j<n;j++){
                //cout<<board[i][j]<<" ";
                if(board[i][j]==0){
                    temp+='.';
                }
                else temp+='Q';
            }
            //cout<<"\n";
            s.push_back(temp);
        }
        
        res.push_back(s);
    }
};
