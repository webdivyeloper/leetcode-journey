class Solution {
public:
    int specialArray(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        for(int i = 1 ; i <= n ; i++){
            int low = 0;
            int high = n-1;
            while(low<=high){
                int mid = low + (high - low) / 2;
                if(nums[mid] >= i){
                    high = mid - 1;
                }
                else{
                    low = mid + 1;
                }
            }
            int remaining = n - low;

            if(remaining == i){
                return i;
            }
        }
        return -1;
    }
};
