class Solution {
public:

    int value(char c) {
        if(c == 'I') return 1;
        if(c == 'V') return 5;
        if(c == 'X') return 10;
        if(c == 'L') return 50;
        if(c == 'C') return 100;
        if(c == 'D') return 500;
        return 1000; // M
    }

    int romanToInt(string s) {
        int n = s.size();
        int sum = 0;
        int i = 0;
        while(i<n-1){
            if(value(s[i]) >= value(s[i+1])){
                sum = sum + value(s[i]);
                i++;
            }
            else{
                sum = sum + value(s[i+1]) - value(s[i]);
                i = i+2;
            }
        }
        if(i == n-1){
            sum = sum + value(s[n-1]);
        }
        return sum;
    }
};
