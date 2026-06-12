class Solution {
public:
    bool isPalindrome(int x) {
        long long ans = 0;
        int rem, num = x;

        if (x < 0) {
            return false;
        }

        while (x) {
            rem = x % 10;
            if (ans > INT_MAX / 10 || ans < INT_MIN / 10) {
                return false;
            }
            ans = ans * 10 + rem;
            x /= 10;
        }
        return ans == num;
    }
};