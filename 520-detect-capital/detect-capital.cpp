class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital = 0;
        for (int ch : word) {
            if (isupper(ch))
                capital++;
        }
        return capital == word.size() || capital == 0 ||
               (capital == 1 && isupper(word[0]));
    }
};