class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int low = 0;
        int high = (m*n) - 1;
        while(low<=high){
            int mid = low + (high - low) / 2;
            int row = mid / m;
            int col = mid % m;
            if(target == matrix[row][col]){
                return true;
            }
            else if(target > matrix[row][col]){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return false;
    }
};





// int n = matrix.size();
//         int m = matrix[0].size();
//         for(int i = 0 ; i < n ; i++){
//             if(target <= matrix[i][m-1]){
//                 for(int j = 0 ; j < m ; j++){
//                     if(matrix[i][j] == target){
//                         return true;
//                     }
//                 }
//                 return false;
//             }
//         }
//         return false;
