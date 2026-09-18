class NumArray {
public:
    vector<int> pre;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        pre.resize(n);
        for(int i = 0 ; i < n ; i++){
            sum = sum + nums[i];
            pre[i] = sum;
        }
    }
    
    int sumRange(int left, int right) {
        if(left == 0){
            return pre[right];
        }
        else{
            return pre[right] - pre[left-1];
        }
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
