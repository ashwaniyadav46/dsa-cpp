class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int left = 0;
        for(int right = 0; right <= n; right++){
            if(right == n || s[right] == ' '){
                reverse(s.begin() + left, s.begin() + right);
                left = right + 1;

            }
        }
        return s;
    }
};