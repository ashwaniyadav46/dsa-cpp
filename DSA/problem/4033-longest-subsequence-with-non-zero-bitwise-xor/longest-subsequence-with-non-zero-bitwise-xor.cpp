class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int totalXor = 0;
        int zeroCount = 0;
        int n = nums.size();

        for (int x : nums) {
            totalXor ^= x;
            if (x == 0)
                zeroCount++;
        }

        if (totalXor != 0)
            return n;

        if (zeroCount == n)
            return 0;

        return n - 1;
    }
};