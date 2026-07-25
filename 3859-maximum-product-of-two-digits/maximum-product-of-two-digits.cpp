class Solution {
public:
    int maxProduct(int n) {
        int digit;
        vector<int> temp;
        while (n) {
            digit = n % 10;
            n = n / 10;
            temp.push_back(digit);
        }
        int maximum = INT_MIN;

        for (int i = 0; i < temp.size(); i++) {
            for (int j = i + 1; j < temp.size(); j++) {
                int product = temp[i] * temp[j];
                maximum = max(product, maximum);
            }
        }

        return maximum;
    }
};
