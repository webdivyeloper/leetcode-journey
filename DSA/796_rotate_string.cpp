class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if(n != goal.size()){
            return false;
        }
        else{
            int i= 0;
            while(i < n){
                string first = s.substr(0,1);
                string remaining = s.substr(1);
                s = remaining + first;
                if(s == goal){
                    return true;
                }
                i++;
            }
        }
        return false;
    }
};
