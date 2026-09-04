class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        int score = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            int diff = *max_element(nums.begin(), nums.begin() + i + 1) - *min_element(nums.begin() + i , nums.end());

            if(diff <= k){
                return i;
            }
        }
        return -1;
    }
};
