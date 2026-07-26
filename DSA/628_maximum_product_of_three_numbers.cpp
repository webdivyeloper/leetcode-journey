class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        long long endproduct = 1;
        long long startproduct = nums[0] * nums[1] * nums[n-1];
        int i = 1;
        while(i<4){
            endproduct = endproduct * nums[n-i];
            i++;
        }
        return max(endproduct,startproduct);
    }
};
