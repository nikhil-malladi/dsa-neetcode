class Solution {
public:
    void dfs(int r, int c, vector<vector<char>>& grid, int rowlen, int collen){
        if((r < 0) || (r >= rowlen) || (c < 0) || (c >= collen)){
            return;
        }        
        if(grid[r][c] == '1'){
            grid[r][c] = '*';
            dfs(r, c-1, grid, rowlen, collen);
            dfs(r-1, c, grid, rowlen, collen);
            dfs(r, c+1, grid, rowlen, collen);
            dfs(r+1, c, grid, rowlen, collen);
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int rowlen = grid.size();
        int collen = grid[0].size();
        int counter = 0;
        for(int r=0; r < rowlen; r++){
            for(int c=0; c < collen; c++){
                if(grid[r][c] == '1'){
                    counter++;
                    dfs(r, c, grid, rowlen, collen);
                }
            }
        }
        return counter;
    }
};
