class Solution {
public:
    string smallestPalindrome(string s) {

        vector<int> freq(26, 0);

        for (char ch : s)
            freq[ch - 'a']++;

        int odd_count = 0;
        char middle = '\0';

        for (int i = 0; i < 26; i++) {
            if (freq[i] % 2 != 0) {
                odd_count++;
                middle = char(i + 'a');
            }
        }

        if (odd_count > 1)
            return "";

        string firstHalf = "";

        for (int i = 0; i < 26; i++) {
            firstHalf.append(freq[i] / 2, char(i + 'a'));
        }

        string secondHalf = firstHalf;
        reverse(secondHalf.begin(), secondHalf.end());

        if (odd_count == 1)
            return firstHalf + middle + secondHalf;

        return firstHalf + secondHalf;
    }
};