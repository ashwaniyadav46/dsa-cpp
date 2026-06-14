class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());

        int l = 0;
        int result = 0;
        long long currsum = 0;

        for (int r = 0; r < nums.size(); r++) {
            currsum += nums[r];

            while ((long long)(r - l + 1) * nums[r] - currsum > k) {
                currsum -= nums[l];
                l++;
            }

            result = max(result, r - l + 1);
        }

        return result;
    }
};