class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_set <char> st;
        for(char &c :jewels){
            st.insert(c);
        }
        int count = 0;
        for(int i = 0; i <stones.length(); i++){
            if(st.find(stones[i]) != st.end()){
                count++;
            }
        }
        return count;
    }
};