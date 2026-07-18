class Solution {
public:
    int findGCD(vector<int>& nums) {
        int minimum = INT_MAX;
        int maximum = INT_MIN;
        int n = nums.size();
        int ans = 0;
        for(int i = 0 ; i < n ; i++){
            maximum = max(nums[i],maximum);
            minimum = min(nums[i],minimum);
        }
        ans = gcd(maximum,minimum);
        return ans;
    }
};
