class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        string temp = "";
        for(int i = 0 ; i < n ; i++){
            if (isalnum(s[i])) {
            temp += tolower(s[i]);
            }
        }
        int m = temp.size();
        int i = 0;
        int j = m-1;
        while(i<j){
            if(temp[i] == temp[j]){
                i++;
                j--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};
