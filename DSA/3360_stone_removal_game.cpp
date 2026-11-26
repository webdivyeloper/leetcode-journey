class Solution {
public:
    bool canAliceWin(int n) {
        int x = 10;
        bool flag = true;
        while(n>=x){
            n = n - x;
            flag = !flag;
            x--;
        }
        return !flag;
    }
};
