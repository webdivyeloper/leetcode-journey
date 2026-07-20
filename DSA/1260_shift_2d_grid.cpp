class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n = grid.size();
        int m = grid[0].size();
        while(k>0){
            for(int i = n-1 ; i >= 0; i--){
                for(int j = m-1 ; j >= 0 ; j--){
                    if(j>0){
                        int temp = grid[i][j];
                        grid[i][j] = grid[i][j-1]; 
                        grid[i][j-1] = temp;
                    }
                    else if(j == 0 && i > 0){
                        int temp = grid[i][j];
                        grid[i][j] = grid[i-1][m-1]; 
                        grid[i-1][m-1] = temp;
                    }
                }
            }
            k--;
        }
        return grid;
    }
};
