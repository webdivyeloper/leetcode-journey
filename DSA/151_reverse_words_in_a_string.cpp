class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int i = 0;
        int j = n-1;
        string str;
        while(i<j){
            swap(s[i],s[j]);
            i++;
            j--;
        }

        i = 0;
        while(i<n){
            while (i < n && s[i] == ' ')
                i++;

            if (i == n)
                break;
            j = i;
            while(j < n && s[j] != ' '){
                j++;
            }
            
            int left = i;
            int right = j - 1;

            while (left < right) {
                swap(s[left], s[right]);
                left++;
                right--;
            }
            
            i = j+1;
        }
        for (int i = 0; i < n; i++) {
            if (s[i] == ' ' && (str.empty() || str.back() == ' '))
                continue;
            str.push_back(s[i]);
        }
        if (!str.empty() && str.back() == ' '){
            str.pop_back(); 
        }
        return str;      
    }
};
