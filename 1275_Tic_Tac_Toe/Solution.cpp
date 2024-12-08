class Solution {
    public:

    bool verdict(vector<vector<char>>grid, char c){
        for(int i=0;i<3;i++){
            if(grid[i][0] == c && grid[i][1] == c && grid[i][2] == c){
                return true;
            }
            if(grid[0][i] == c && grid[1][i] == c & grid[2][i] == c){
                return true;
            }
        }
            if(grid[1][1] == c && ((grid[0][0] == c && grid[2][2] == c) || (grid[0][2] == c && grid[2][0] == c)))
                return true;
            return false;
        
    }
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<char>>grid(3, vector<char>(3, ' '));
        int a = true;
        for(vector<int> move : moves){
            if(a){
                grid[move[0]][move[1]] = 'X';
            }
            else{
                grid[move[0]][move[1]] = 'O';
            }
            bool A = verdict(grid, 'X');
            bool B = verdict(grid, 'O');
            if(A){
                return "A";
            }
            else if(B){
                return "B";
            }
            a = !a;

        }
        if(moves.size() == 9){
            return "Draw";
        }
        else{
            return "Pending";
        }
    }
};