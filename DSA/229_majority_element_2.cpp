class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int pivot = n/3;
        int count = 1;
        vector<int> ans;
        if(n == 1){
            return nums;
        }
        else if(n == 2){
            if(nums[0]==nums[1]){
                ans.push_back(nums[0]);
            }
            else{
                return nums;
            }
        }
        else{
            for(int i = 1; i < n ; i++){
                if(nums[i]==nums[i-1]){
                    count++;
                    if(count > pivot){
                        if(ans.empty() || ans.back() != nums[i]){
                            ans.push_back(nums[i]);
                        }
                    }
                }
                else{
                    count = 1;
                }
            }
        }
        
        return ans;
    }
};
