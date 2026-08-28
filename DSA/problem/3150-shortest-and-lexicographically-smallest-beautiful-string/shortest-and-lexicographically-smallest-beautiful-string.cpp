class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int left = 0, ones = 0;
        string ans = "";

        for (int right = 0; right < n; ++right) {
            ones += (s[right] == '1');

            while (ones > k) {
                ones -= (s[left] == '1');
                ++left;
            }

            // Remove leading zeros while preserving k ones
            while (ones == k && left <= right && s[left] == '0') {
                ++left;
            }

            if (ones == k) {
                string cur = s.substr(left, right - left + 1);

                if (ans.empty() ||
                    cur.size() < ans.size() ||
                    (cur.size() == ans.size() && cur < ans)) {
                    ans = cur;
                }
            }
        }

        return ans;
    }
};