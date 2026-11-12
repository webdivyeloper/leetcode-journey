class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int count = 1; 
        int IncCount = 1;
        int DecCount = 1;
        int n = nums.size();
        for(int i = 1 ; i < n ; i++){
            if(nums[i] > nums[i-1]){
                count++;
            }
            else{
                IncCount = max(IncCount , count);
                count = 1;
            }
        }
        IncCount = max(IncCount, count);
        count = 1;
        for(int i = 1 ; i < n ; i++){
            if(nums[i] < nums[i-1]){
                count++;
            }
            else{
                DecCount = max(DecCount , count);
                count = 1;
            }
        }
        DecCount = max(DecCount , count);
        return max(DecCount , IncCount);
    }
};
