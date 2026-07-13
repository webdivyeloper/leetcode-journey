class Solution {
public:
    int reverse(int x) {
        long long newnum =0;
        while(x!=0){
            int rem = x % 10;
            newnum = newnum * 10 + rem;
            if(newnum > INT_MAX || newnum < INT_MIN) return 0;
            x = x / 10;
        }
        return newnum;
    }
};
