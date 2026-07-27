class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int maximum = INT_MIN;
        int secondmax = 0;
        for(int i = 0 ; i < n ; i++){
            if (nums[i] > maximum) {
                secondmax = maximum;
                maximum = nums[i];
            } else if (nums[i] > secondmax) {
                secondmax = nums[i];
            }
        }
        int product = (maximum - 1) * (secondmax - 1);
        return product;
    }
};
