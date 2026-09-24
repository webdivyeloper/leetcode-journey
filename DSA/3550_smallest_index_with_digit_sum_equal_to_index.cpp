class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int n = nums.size();
        int rem;
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            int temp = nums[i];
            while(temp > 0){
                rem = temp % 10;
                sum += rem;
                temp /= 10;
            }
            if(sum == i){
                return i;
            }
            else{
                sum = 0;
            }
        }
        return -1;
    }
};
