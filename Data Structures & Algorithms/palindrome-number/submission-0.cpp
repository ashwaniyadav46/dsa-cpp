class Solution {
   public:
    bool isPalindrome(int x) {
        long long ans = 0;
        int num = x;
        int rem;
        if (x < 0) {
            return false;
        }

        while (x) {
            rem = x % 10;
            ans = ans * 10 + rem;
            x /= 10;
        }
        return ans == num;
    }
};