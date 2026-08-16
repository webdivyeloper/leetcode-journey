class Solution {
public:

void generate(vector<string>& ans , string s , int opening , int closing , int n){
    if(closing == n){
        ans.push_back(s);
        return;
    }
    if(opening < n){
        generate(ans , s+'(' , opening+1 , closing , n);
    }
    if(closing < opening){
        generate(ans , s+')' , opening , closing + 1 , n);
    }
}

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generate(ans,"",0,0,n);
        return ans;
    }
};
