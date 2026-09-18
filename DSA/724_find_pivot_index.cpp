class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        vector<int> suf(n);
        int sum = 0;
        for(int i = n-1 ; i >=0 ; i--){
            sum = sum + nums[i];
            suf[i] = sum;
        }
        sum = 0;
        for(int i = 0 ; i < n ; i++){
            sum = sum + nums[i];
            if(sum - nums[i] == suf[i] - nums[i]){
                return i;
            }
        }
        return -1;
    }
};
