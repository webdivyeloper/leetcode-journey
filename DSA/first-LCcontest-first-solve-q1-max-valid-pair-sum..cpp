class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        int mid = n/2;
        int middleelement = nums[n/2];

        for(int i = 0 ; i < mid ; i++){
            if(nums[i] == middleelement){
                return false;
                break;
            }
        }
        for(int i = mid + 1 ; i < n ; i++){
            if(nums[i] == middleelement){
                return false;
                break;
            }
        }
        return true;
    }
};©leetcode
