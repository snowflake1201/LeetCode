class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int ans = 0;
        int row = grid.size();
        int col = grid[0].size();
        for(int i = 0; i < row; i++) {
            for(int j = 0; j < col; j++) {
                if(grid[i][j]) {
                    ans += 4;
                    if(i - 1 >= 0 && grid[i - 1][j]) ans--; //up
                    if(i + 1 < row && grid[i + 1][j]) ans--; //down
                    if(j - 1 >= 0 && grid[i][j - 1]) ans--; //left
                    if(j + 1 < col && grid[i][j + 1]) ans--; //right
                }   
            }
        }
        return ans;
    }
};
