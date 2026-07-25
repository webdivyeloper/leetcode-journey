class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int minr = 0;
        int maxr = n-1;
        int minc = 0;
        int maxc = m-1;
        vector<int> ans;
        while (minr <= maxr && minc <= maxc){
            for(int j = minc ; j <= maxc ; j++){
            ans.push_back(matrix[minr][j]);
            }  
            minr++;
            for(int i = minr ; i <= maxr ; i++){
                ans.push_back(matrix[i][maxc]);
            }       
            maxc--;
            if (minr <= maxr){
                for(int j = maxc ; j >= minc ; j--){
                    ans.push_back(matrix[maxr][j]);
                }
                maxr--;
            }
            if (minc <= maxc){
                for(int i = maxr ; i >= minr ; i--){
                    ans.push_back(matrix[i][minc]);
                }
                minc++;
            }
            
        }
        return ans;
    }
};
