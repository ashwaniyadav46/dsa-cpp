class Solution {
public:
    bool repeatedSubstringPattern(string s) {

        int n = s.length();

        for (int len = 1; len < n; len++) {

            // repeating substring must divide the whole string
            if (n % len != 0)
                continue;

            bool same = true;

            for (int i = 0; i < n; i++) {

                if (s[i] != s[i % len]) {
                    same = false;
                    break;
                }
            }

            if (same)
                return true;
        }

        return false;
    }
};