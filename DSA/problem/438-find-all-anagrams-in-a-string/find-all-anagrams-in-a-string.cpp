class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        if (s.length() < p.length()) {
            return ans;
        }
        vector<int> freqP(26, 0);
        vector<int> freqS(26, 0);

        for (char ch : p) {
            freqP[ch - 'a']++;
        }
        int k = p.length();
        for (int i = 0; i < k; i++) {
            freqS[s[i] - 'a']++;
        }
        for (int i = k; i < s.length(); i++) {
            if (freqS == freqP) {
                ans.push_back(i - k);
            }
            freqS[s[i] - 'a']++;
            freqS[s[i - k] - 'a']--;
        }
        if (freqS == freqP) {
            ans.push_back(s.length() - k);
        }
        return ans;
    }
};