class Solution {
public:
    long long countCommas(long long n) {
        long long ans = 0;
        long long p = 1000;
        long long commas = 1;

        while (p <= n) {
            long long R = min(n, p * 1000 - 1);

            ans += (R - p + 1) * commas;

            p *= 1000;
            commas++;
        }

        return ans;
    }
};