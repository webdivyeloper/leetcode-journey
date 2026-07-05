class Solution {
public:
    int maxDigitRange(vector<int>& nums) {
       int n = nums.size();
        int ans = 0;
        int maxrange = 0;
    for(int i = 0 ; i < n ; i++){
        int biggest = 0;
        int smallest = INT_MAX;
        int temp = nums[i];
            while(temp > 0){
                int division = temp%10;
                temp = temp/10;
                biggest = max(biggest , division);
                smallest = min(smallest, division);
            }
            
        int range = biggest - smallest;
        if(range > maxrange){
            maxrange = range;
            ans = nums[i];
            }
        else if(range == maxrange){
            ans +=nums[i];
            
        }
            
        }
        return ans;
        
    }
};©leetcode
