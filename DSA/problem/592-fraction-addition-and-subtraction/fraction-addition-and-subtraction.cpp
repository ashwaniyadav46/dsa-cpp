
class Solution {
public:
    string fractionAddition(string expression) {
        int numerator = 0;
        int denominator = 1;
        int i = 0;
        int n = expression.size();
         while (i < n) {
            int sign = 1;
            // Handle sign
            if (expression[i] == '-') {
                sign = -1;
                i++;
            }
            else if (expression[i] == '+') {
                i++;
            }
            // Extract numerator
            int num = 0;
            while (i < n && isdigit(expression[i])) {
                num = num * 10 + (expression[i] - '0');
                i++;
            }

            // Apply sign
            num *= sign;

            i++; // Skip '/'

            // Extract denominator
            int den = 0;
            while (i < n && isdigit(expression[i])) {
                den = den * 10 + (expression[i] - '0');
                i++;
            }

            // Add fractions
            numerator = numerator * den + num * denominator;
            denominator = denominator * den;

            // Simplify fraction
            int g = gcd(abs(numerator), denominator);

            numerator /= g;
            denominator /= g;
        }

        return to_string(numerator) + "/" + to_string(denominator);
    }
};
