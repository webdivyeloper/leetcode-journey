class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        int prevsum = 0;
        for(int i = 0 ; i < k ; i++){
            prevsum += nums[i];
        }
        int i = 1; 
        int j = k;
        double currsum = 0;
        double maxsum = prevsum;
        while(j<n){
            currsum = prevsum + nums[j] - nums[i-1];
            if(currsum > maxsum){
                maxsum = currsum;
            }
            prevsum = currsum;
            i++;
            j++;
        }
        return (double)maxsum/k;
    }
};
