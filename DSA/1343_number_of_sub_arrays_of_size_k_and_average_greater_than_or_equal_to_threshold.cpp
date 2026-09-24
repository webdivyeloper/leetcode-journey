class Solution {
public:
    int numOfSubarrays(vector<int>& nums, int k, int threshold) {
        int n = nums.size();
        int prevsum = 0;
        int count = 0;
        for(int i = 0 ; i < k ; i++){
            prevsum += nums[i];
        }
        if(prevsum >= threshold * k){
            count++;
        }
        int i = 1;
        int j = k;
        int currsum = 0;
        while(j<n){
            currsum = prevsum + nums[j] - nums[i-1];
            if(currsum >= threshold * k){
                count++;
            }
            prevsum = currsum;
            i++;
            j++;
        }
        return count;
    }
};
