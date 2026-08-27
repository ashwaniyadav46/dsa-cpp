class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> mp;

        // remainder 0 exists before the array starts
        mp[0] = -1;

        int prefixSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i];

            int rem = prefixSum % k;

            if (mp.find(rem) != mp.end()) {
                // Make sure subarray length >= 2
                if (i - mp[rem] >= 2)
                    return true;
            }
            else {
                // Store FIRST occurrence only
                mp[rem] = i;
            }
        }

        return false;
    }
};