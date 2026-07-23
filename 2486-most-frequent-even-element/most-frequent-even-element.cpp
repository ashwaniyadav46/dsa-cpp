class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int> mp;
        int ans = -1;
        for (int x : nums) {
            if (x % 2 == 0) {
                mp[x]++;
            }
        }
        int maximum = INT_MIN;
        for (auto x : mp) {
            int a = x.first;
            int b = x.second;
            if (b > maximum) {
                ans = a;
                maximum = b;
            } else if (b == maximum) {
                ans = min(ans, a);
            }
        }
        return ans;
    }
    
};