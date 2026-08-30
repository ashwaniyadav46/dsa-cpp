class Solution {
private:
    bool isVowel(char c){
        return c =='a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }
public:
    int maxVowels(string s, int k) {
        int count = 0;
        for(int i = 0; i < k; i++){
            if(isVowel(s[i])){
                count++;
            }
        }
        int maximum = count;
        for(int i = k; i < s.size(); i++){
            if(isVowel(s[i - k])){
                count--;
            }
            if(isVowel(s[i])){
                count++;
            }
            maximum = max(maximum, count);
        }
        return maximum;
    }
};