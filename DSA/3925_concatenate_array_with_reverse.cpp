class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2*n,0);
        int l = 0;
        int m = 2*n - 1;
        for(int i = 0 ; i < n ; i++){
            ans[l] = nums[i];
            ans[m] = nums[i];
            l++;
            m--;
        }
        return ans;
    }
};
