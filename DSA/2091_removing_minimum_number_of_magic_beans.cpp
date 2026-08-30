class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int maximum = INT_MIN;
        int minimum = INT_MAX;
        int maxidx;
        int minidx;
        int ans;
        for(int i = 0 ; i < n ; i++){
            if(nums[i] > maximum){
                maximum = nums[i];
                maxidx = i;
            }
            if(nums[i] < minimum){
                minimum = nums[i];
                minidx = i;
            }
        }

        int option1 = max(maxidx, minidx) + 1;
        int option2 = n - min(maxidx, minidx);
        int option3 = min(maxidx, minidx) + 1 + n - max(maxidx, minidx);

        return min({option1, option2, option3});
    }
};
