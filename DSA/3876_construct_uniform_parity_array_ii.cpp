class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        int evenmin = INT_MAX;
        int oddmin = INT_MAX;
        for(int i = 0 ; i < n ; i++){
            if(nums1[i] % 2 == 0){
                evenmin = min(evenmin , nums1[i]);
            }
            else{
                oddmin = min(oddmin , nums1[i]);
            }
        }
        if (oddmin == INT_MAX || evenmin == INT_MAX) return true;
        else if(oddmin < evenmin) return true;
        return false;
    }
};
