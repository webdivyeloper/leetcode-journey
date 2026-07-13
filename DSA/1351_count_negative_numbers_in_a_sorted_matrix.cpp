class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int i;
        int m = grid.size();
        int n = grid[i].size();
        int count = 0;
        for(int i = 0; i < m ;i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] < 0) count++;
            }
        }
        return count;
    }
};
