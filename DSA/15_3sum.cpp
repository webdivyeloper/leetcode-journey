class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        vector<vector<int>> finalans;
        vector<int> ans;
        for(int k = 0 ; k < n ; k++){
            if(k > 0 && nums[k] == nums[k-1]){
                continue;
            }
            int i = k+1;
            int j = n-1;
            while(i<j){
                if(nums[k] + nums[i] + nums[j] == 0){
                    ans.push_back(nums[k]);
                    ans.push_back(nums[i]);
                    ans.push_back(nums[j]);
                    finalans.push_back(ans);
                    ans.clear();
                    i++;
                    j--;

                    while(i < j && nums[i] == nums[i-1])
                        i++;

                    while(i < j && nums[j] == nums[j+1])
                        j--;
                }
                else if(nums[k] + nums[i] + nums[j] > 0){
                    j--;
                }
                else{
                    i++;
                }
            }
        }
        return finalans;
    }
};
