class Solution {
public:
    int hammingWeight(int n) {
        int num = n;
        int count = 0;

        while (num) {
            if ((num & 1) == 1)
                count++;

            num = num >> 1;
        }

        return count;
    }
};