class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum = 0;
        int n = mat.size();
        int i = 0;
        for(int i = 0 ; i < n ; i++){
            sum = sum + mat[i][i];
        }
        int j = n-1;
        while(i<n){
            sum = sum + mat[i][j];
            i++;
            j--;
        }
        if(n%2 != 0){
            sum = sum - mat[n/2][n/2];
        }
        return sum;
    }
};
