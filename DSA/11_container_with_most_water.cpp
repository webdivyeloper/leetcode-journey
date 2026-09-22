class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0; 
        int j = n-1;
        int ans = 0;
        while(i<j){
            int maxm = min(height[j],height[i]) * (j-i);
            ans = max(maxm , ans);
            if(height[i] > height[j]) j--;
            else i++;
        }
        return ans;
    }
};
