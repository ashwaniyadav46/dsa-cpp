class Solution {
public:
    string minWindow(string s, string t) {
        unordered_map<char,int> target, window;
        for( char targetchar : t){
            target[targetchar]++;
        }

        int have = 0;
        int need = target.size();
        int left = 0, start = 0;
        int minlen = INT_MAX;

        for(int right = 0; right < s.size(); right++){
             char windowchar = s[right];
             window[windowchar]++;

             if(target.count(windowchar) && window[windowchar] == target[windowchar]){
                have++;
             }
             while(have == need){
                if((right - left + 1) < minlen){
                    minlen = right - left + 1;
                    start = left;
                }
                
                char leftchar = s[left];
                window[leftchar]--;

                if(target.count(leftchar) && window[leftchar] < target[leftchar]){
                    have--;
                }
                left++;
             }
        }
             return minlen == INT_MAX ? "":s.substr(start, minlen);


        }

        
    };

