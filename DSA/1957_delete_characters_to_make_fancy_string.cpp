class Solution {
public:
    string makeFancyString(string s) {
        int n = s.size();
        string str;
        
        for(int i = 0 ; i < n ; i++){
            if(str.size()<2){
                str.push_back(s[i]);
            }
            else if(str.size()>=2){
                if(str[str.size()-1] == s[i] && str[str.size()-2] == s[i]){
                    continue;
                }
                else{
                    str.push_back(s[i]);
                }
            }
        }
        return str;
    }
};
