class Solution {
public:
    int count_digits(int element) {
        int digit = 0;
        while (element) {

            digit++;
            element /= 10;
        }
        return digit;
    }
    int findNumbers(vector<int>& nums) {
        int n = nums.size();
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (count_digits(nums[i]) % 2 == 0) {
                count++;
            }
        }
        return count;
    }
};