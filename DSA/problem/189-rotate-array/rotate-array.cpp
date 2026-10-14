class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n; // In case k >= n
        
        // 1. Reverse the whole array
        reverse(nums.begin(), nums.end());
        // 2. Reverse the first k elements
        reverse(nums.begin(), nums.begin() + k);
        // 3. Reverse the rest
        reverse(nums.begin() + k, nums.end());
    }
};