class Solution {
public:
    int scoreOfString(string s) {
        int n = s.size();
        int diff = 0;
        int sum = 0;
        for(int i = 1 ; i < n ; i++){
            diff = abs(s[i] - s[i-1]);
            sum += diff;
        }
        return sum;
    }
};
