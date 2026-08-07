class Solution {
public:
    int mirrorDistance(int n) {
        int reversed = 0;
        int temp = n;
        while(temp>0){
            int rem = temp % 10;
            reversed = reversed * 10 + rem;
            temp = temp / 10;
        }
        return abs(n - reversed);
    }

};
