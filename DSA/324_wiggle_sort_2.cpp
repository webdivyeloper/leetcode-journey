class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans(n);
        int w = 0;
        for(int i = (n - 1) / 2; i >= 0; i--){
            ans[w] = nums[i];
            w = w+2;
        }
        int x = 1;
        for(int j = n - 1; j >= (n + 1) / 2; j--){
            ans[x] = nums[j];
            x = x+2;
        }
        nums = ans;
    }
};
