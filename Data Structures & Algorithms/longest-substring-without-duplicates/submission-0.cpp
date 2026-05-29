class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int i = 0;
        int res = 0;
        for(int j = 0; j < s.size(); j++){
           
           while(st.find(s[j]) != st.end()){
            st.erase(s[i]);
            i++;
           }
            st.insert(s[j]);
            res = max(res, j - i + 1);
        }
        return res;
    
    }
};
